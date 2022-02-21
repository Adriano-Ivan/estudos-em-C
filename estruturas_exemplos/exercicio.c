#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[40];
    int matricula;
    float prova1;
    float prova2;
    float media;
    int faltas;
    char situacao[30];
};

void tiraf(char *s)
{
	s[strlen(s)-1] = '\0';
}

void leString(char *s, int tam)
{
	fflush(stdin);// OBS: NO WINDOWS
	fgets(s,tam,stdin);
	tiraf(s);
}

struct aluno cadastro[40];

int controlador = 0;

int inserirAlunos() {

    char opcao_continuar = 's';

    while(opcao_continuar == 's' || opcao_continuar == 'S') {

        printf("\nDIGITE O NOME: ");
        leString(cadastro[controlador].nome, sizeof(cadastro[controlador].nome));

        printf("DIGITE A MATRICULA: ");
        scanf("%d", &cadastro[controlador].matricula);

        printf("DIGITE A NOTA DA PROVA 1: ");
        scanf("%f", &cadastro[controlador].prova1);

        printf("DIGITE A NOTA DA PROVA 2: ");
        scanf("%f", &cadastro[controlador].prova2);

        cadastro[controlador].media = (cadastro[controlador].prova1 + cadastro[controlador].prova2) / 2;

        printf("DIGITE O NUMERO DE FALTAS: ");
        scanf("%d", &cadastro[controlador].faltas);

        if(cadastro[controlador].media >= 60 && cadastro[controlador].faltas <= 20) {
            strcpy(cadastro[controlador].situacao, "Aprovado");
        } else {
            strcpy(cadastro[controlador].situacao, "Reprovado");
        }

        controlador++;

        printf("Quer continuar ? [S ou s para continuar, qualquer outro para sair]");
        scanf(" %c", &opcao_continuar);
    }

    return controlador;
}

int salvarCadastro(int i) {

    FILE *arq;

    arq = fopen("alunos.txt", "w");
    if(arq == NULL) {
        fprintf(stderr, "\nHouve um erro ao abrir o arquivo alunos.txt");
    }
    else {
        for(int j = 0; j < i; j++) {
            fwrite(&cadastro[j], sizeof(struct aluno), 1, arq);
        }
        fclose(arq);
    }

    return 0;
}

int carregarCadastro() {

    FILE *arq;
    int leitura, acumulo;

    arq = fopen("alunos.txt", "r");

    if(arq == NULL) {
        fprintf(stderr, "\nHouve um erro ao abrir o arquivo alunos.txt");
        return -1;
    }
    else {
        acumulo = 0;
        do {
            leitura = fread(&cadastro[acumulo],sizeof(struct aluno), 1, arq);
            acumulo++;
        }while(leitura == 1);

        fclose(arq);
    }

    return acumulo-1;
}
void listarAlunos(int i) {

    printf("\n");
    for(int j = 0; j < i; j++) {
        printf("NOME: %s - MATRICULA: %d - PROVA 1: %.2f - PROVA 2: %.2f - MEDIA: %.2f - FALTAS: %d - SITUACAO: %s\n", cadastro[j].nome, cadastro[j].matricula, cadastro[j].prova1, cadastro[j].prova2, cadastro[j].media, cadastro[j].faltas, cadastro[j].situacao);
    }
}
int menu() {
    int opcao;

    do {
        printf("-------------------------------------------\n");
        printf("    GERENCIAMENTO DOS DADOS DOS ALUNOS     \n");
        printf("-------------------------------------------\n\n");

        printf("\n 1. INSERIR ALUNOS");
        printf("\n 2. LISTAR ALUNOS");
        printf("\n 3. SALVAR DADOS");
        printf("\n 4. CARREGAR DADOS");
        printf("\n 0. SAIR DO PROGRAMA");

        printf("\n\n DIGITE SUA ESCOLHA: ");
        scanf("%d", &opcao);
    } while(opcao < 0 || opcao > 4);

    return opcao;
}

int main() {

    int num_alunos, opcao, verificador;

    num_alunos = 0;
    do {
        opcao = menu();

        switch(opcao) {
        case 1:
            num_alunos = inserirAlunos();
            break;
        case 2:
            listarAlunos(num_alunos);
            break;

        case 3:
            verificador = salvarCadastro(num_alunos);
            if(verificador == 0) {
                printf("\nO cadastro foi salvo com sucesso !\n\n");
            }
            break;
        case 4:
            num_alunos = carregarCadastro();
            printf("\nNumero de alunos: %d\n\n", num_alunos);
            break;
        }
    } while(opcao != 0);

    getchar();
    system("pause");
    return 0;
}
