#include <stdio.h> 

int main(int argc, char* argv[]){

    int a;

    printf("Informe a quantidade de alunos: \n");
    scanf("%d", &a);

    float notas[a];

    for(int i = 0; i < a; i++){
        printf("\nDigite a nota do aluno %d: \n", i+1);
        scanf("%f", &notas[i]); 
    }

    return 0;

    }