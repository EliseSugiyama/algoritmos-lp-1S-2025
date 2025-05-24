#include <stdio.h> 
#define TAM_NOME 64

typedef struct Aluno{
    char nome[64];
    float nota;
} Aluno;

void imprimir_aluno(Aluno a){
    printf("Nota: %.2f - %s\n", a.nota, a.nome);
}

int main(int argc, char* argv[]){

    int n = 3;
    Aluno alunos[n];

    for(int i = 0; i < n; i++){
    printf("\n\nDigite o nome do aluno %d: \n", i+1);
    fgets(alunos[i].nome, TAM_NOME, stdin);
    printf("\nDigite a nota do aluno %d: \n", i+1);
    scanf("%f", &alunos[i].nota);
    fflush(stdin);

    }

    Aluno aluno_maior = alunos[0];
    Aluno aluno_menor = alunos[0];
    float media = 0.0, soma = 0.0;

    for(int i = 0; i < n; i++){
        if(aluno_maior.nota < alunos[i].nota){
            aluno_maior.nota = alunos[i].nota;
        }
        if(aluno_menor.nota > alunos[i].nota){
            aluno_menor.nota = alunos[i].nota;
        }
        soma += alunos[i].nota;
    } 

    printf("\n\nAluno maior nota: \n");
    imprimir_aluno(aluno_maior);
    printf("Aluno menor nota: \n");
    imprimir_aluno(aluno_menor);
    printf("Media das notas: %.2f\n\n", soma/n);

    return 0;
}