#include <stdio.h>

int main(int argc, char* argv){

    int numero, primo, divis;
    char opcao;

    do{
    printf("\nDigite um numero: \n");
    scanf("%d", &numero);

    if(numero%2 == 0 || numero%3 == 0 || numero%5 == 0){
        printf("O numero nao eh primo. \n");
    } else {
        do{
            numero/numero == primo;
            printf("O numero eh primo.\n");
        } while (numero/2 == 0);
    }

    printf("\nGostaria de recomecar?\n");
    printf("S - Sim\n");
    printf("N - Nao\n");
    scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');
    return 0;
}