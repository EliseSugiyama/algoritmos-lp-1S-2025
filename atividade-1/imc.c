#include <stdio.h>

int main(int argc, char* argv[]){
float peso;
float altura; 
printf("Digite seu peso: ");
scanf("%f", &peso);
printf("Digite sua altura: ");
scanf("%f", &altura);
float daltura = altura*altura;
float imc = peso/daltura;
printf("De acordo com o seu peso %.1f e a sua altura %.2f: seu IMC eh %.2f.", peso, altura, imc);
}
