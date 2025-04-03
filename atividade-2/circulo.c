#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(int argc, char* argv[]){

    float raio;

    printf("Digite o RAIO: ");
        scanf("%f", &raio);

    float area = PI*(raio*raio);

    printf("A area desse circulo eh %.2f!", area);
    
    return 0;
}