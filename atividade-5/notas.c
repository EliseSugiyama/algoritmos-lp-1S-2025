#include <stdio.h> 

int main(int argc, char* argv[]){

    int i, alunos, ap = 0, k;
    float ma = 0.0, me = 10.0, soma = 0, media;

    printf("\nDigite a quantidade de alunos: \n");
    scanf("%d", &alunos);

    float notas[alunos];

    for(i = 0; i < alunos; i++){
        do{
            printf("\nDigite a nota do aluno %d: \n", i + 1);
            scanf("%f", &notas[i]);

            if(0.0 > notas[i] || notas[i] > 10.0){
                printf("\n\n!Nota invalida! Por favor digite uma nota entre 0 e 10!");

            } else {
                if(ma < notas[i]){
                    ma = notas[i];
                }

                if(notas[i] < me){
                    me = notas[i];
                }

                if(notas[i] >= 6.0){
                    ap++;
                }
                soma += notas[i];

            }
        } while(0.0 > notas[i] || notas[i] > 10.0);
    } 

    media = soma/alunos;

    printf("\n - A media: %.1f\n", media);
    printf("\n - Maior nota: %.1f\n", ma);
    printf("\n - Menor nota: %.1f\n", me);
    printf("\n - Quantidade de alunos aprovados: %d\n", ap);

    do{
        printf("\n\nDigite qual a posicao do aluno que voce deseja: \n");
        scanf("%d", &k);

        if(k > alunos){
            printf("\n\n!POSICAO INVALIDA! POR FAVOR DIGITE UMA POSICAO VALIDA!");
        } 
    } while(k > alunos);

    printf("\n - Nota do aluno da posicao %d: %.1f\n", k, notas[k-1]);
    printf(" ");

    return 0;
}