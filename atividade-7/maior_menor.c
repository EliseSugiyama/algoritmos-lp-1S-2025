#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int x, y, z;
    int numeros [argc - 1];

    if(argc < 3){
        printf("Informe 2 ou 3 argumentos.");
        return 1;
    } else {
        for(int i = 0; i < argc-1; i++){
            numeros[i] = atoi(argv[i+1]);
        }
        for(int i = 0; i < argc-1; i++){
            numeros[i] = atoi(argv[i+1]);
        }
        printf("Maior: %d\nMenor: %d", maior_e(numeros, argc-1), menor_e(numeros, argc-1));
    }
    return 0;
}