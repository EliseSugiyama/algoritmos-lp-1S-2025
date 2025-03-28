#include <stdio.h>

int main(int argc, char* argv[]){

    float B, b, h;

    printf("Digite a base MAIOR: ");
        scanf("%f", &B);

    printf("Digite a base MENOR: ");
        scanf("%f", &b);

    printf("Digite a ALTURA: ");
        scanf("%f", &h);

    printf("A area desse trapezio eh %.2f!", (B+b)*h/2);

}