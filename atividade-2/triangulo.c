#include <stdio.h>

int main(int argc, char* argv[]){

    float bt, ht;

    printf("Digite a BASE: ");
        scanf("%f", &bt);

    printf("Digite a ALTURA: ");
        scanf("%f", &ht);

    float area = bt*ht/2;

    printf("A area desse triangulo eh %.2f!", area);

}