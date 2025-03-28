#include <stdio.h>

int main(int argc, char* argv[]){

    int idade;
    float altura;
    double peso; 

    printf("Digite a idade: ");
        scanf("%d", &idade);

    printf("Digite a altura: ");
        scanf("%f", &altura);

    printf("Digite o peso: ");
        scanf("%lf", &peso);

    printf("A idade eh: %d\n", idade); 
    printf("A altura eh: %.2fcm\nO peso eh: %.1lfkg\n", altura, peso);

    double dobro_peso = peso*2.0;

    printf("O dobro do peso eh: %.1lfkg.", dobro_peso);

    return 0;
} 