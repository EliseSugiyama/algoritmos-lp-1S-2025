#include <stdio.h>

int main(int argc, char* argv[]){

float peso;
float altura; 

printf("Digite um peso: ");
    scanf("%f", &peso);

printf("Digite uma altura: ");
    scanf("%f", &altura);

float daltura = altura*altura;
float imc = peso/daltura;

printf("De acordo com o peso %.1f e a altura %.2f: o IMC eh %.2f.", peso, altura, imc);
}
