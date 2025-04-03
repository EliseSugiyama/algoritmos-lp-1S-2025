#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(int argc, char* argv[]){

    char opcao;
    float raio, D, d, quadrado, base, altura, B, b, h, bt, ht, pi, atri;

    printf("area.c\n");
    printf("Escolha uma opção: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){
        case 'c':
            printf("Circulo\n");
            printf("Digite o RAIO: ");
            scanf("%f", &raio);

            pi = PI*(raio*raio);

            printf("A area desse circulo eh %.2f!", pi);
            break;
        case 'l':
            printf("Losango\n");
            printf("Digite a diagonal MAIOR: ");
            scanf("%f", &D);

            printf("Digite a diagonal MENOR: ");
            scanf("%f", &d);

            printf("A area desse losango eh %.2f!", D*d/2);
            break;
        case 'q': 
            printf("Quadrado\n");
            printf("Digite o LADO: ");
            scanf("%f", &quadrado);

            float a_quadrado = powf(quadrado, quadrado);

            printf("A area desse quadrado eh %.2f!", a_quadrado);
            break;
        case 'r':
            printf("Retangulo\n");
            printf("Digite a BASE: ");
            scanf("%f", &base);

             printf("Digite a ALTURA: ");
            scanf("%f", &altura);

            printf("A area desse retangulo eh %.2f!", base*altura);
    
            break;
        case 't': 
            printf("Triangulo\n");
            printf("Digite a BASE: ");
            scanf("%f", &bt);

            printf("Digite a ALTURA: ");
            scanf("%f", &ht);

            atri= bt*ht/2;

            printf("A area desse triangulo eh %.2f!", atri);
            break;
        case 'z': 
            printf("Trapezio\n");
            printf("Digite a base MAIOR: ");
            scanf("%f", &B);

            printf("Digite a base MENOR: ");
            scanf("%f", &b);

            printf("Digite a ALTURA: ");
            scanf("%f", &h);

            printf("A area desse trapezio eh %.2f!", (B+b)*h/2);
            break;
        default:
            printf("Opcao invalida");
    }
}