#include <stdio.h>

int main(int argc, char* argv[]){

    float ht, bt;

    printf("Digite a base do triangulo: ");
    scanf("%.2f", &bt);

    printf("Digite o altura do triangulo: ");
    scanf("%.2f", &ht); 

    printf("A area desse triangulo eh %.2f!", (bt*ht)/2);

}