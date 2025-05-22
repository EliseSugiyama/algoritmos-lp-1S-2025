#include <stdio.h> 
#define TAM_NOME 64

typedef struct Aluno{
    char nome[64];
    float nota;
} Aluno;

void imprimir_aluno(Aluno a){
    printf("\nNome: %s\nNota: %.2f\n", a.nome, a.nota);
}

void media(Aluno b){
}

int main(int argc, char* argv[]){

    int n = 5;
    struct Aluno alunos[n];

    for(n = 0; n < 5; n++){
    printf("\nDigite o nome do aluno: \n");
    fgets(alunos[n].nome, TAM_NOME, stdin);
    fflush(stdin);
    printf("Digite a nota do aluno: \n");
    scanf("%f", &alunos[n].nota);
    fflush(stdin);
    
    imprimir_aluno(alunos[n]);
    }
    return 0;
}