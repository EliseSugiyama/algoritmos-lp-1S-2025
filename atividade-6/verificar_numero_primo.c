#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    int numero, i, primo;
    char opcao;

    do{
    printf("\nDigite um numero: \n");
    scanf("%d", &numero);

    if(numero > 1){
        primo = 1;

        for (i = 2; i <= sqrt(numero); i++) {
                if (numero % i == 0) {
                    primo = 0;
                    break;
                }
            } if(primo){
                printf("O numero eh primo!\n");
            } else {
                printf("O numero nao eh primo!\n");
            } 
        } else { 
            printf("Numero invalido!\n");
        }

    printf("\nGostaria de recomecar?\n");
    printf("S - Sim\n");
    printf("N - Nao\n");
    scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');
    return 0;
}