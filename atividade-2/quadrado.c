#include <stdio.h>
#include <math.h>

int main (int argc, char* argv[]){

    float quadrado;

    printf("Digite o LADO: ");
        scanf("%f", &quadrado);

    float a_quadrado = powf(quadrado, quadrado);

    printf("A area desse quadrado eh %.2f!", a_quadrado);
    
    return 0;
}