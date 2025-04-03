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

printf("De acordo com o peso %.1f e a altura %.2f\nIMC = %.2f.\nA sua classificacao eh: ", peso, altura, imc);

    if(imc <= 18.5){
        printf("baixo peso.\n");
    }   

    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal.\n");
    }

    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso.\n");
    }

    if(imc > 29.9 && imc <= 34.9){
        printf("obesidade I.\n");
    }

    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade II.\n");
    }

    if(imc > 39.9){
        printf("obesidade III.\n");
    }
    return 0;
}
