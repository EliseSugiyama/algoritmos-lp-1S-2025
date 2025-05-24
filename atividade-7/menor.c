#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int x, y, z;
    int numeros [argc - 1];

    if(argc < 3){
        printf("Informe 2 ou 3 argumentos.");
    } else {
        for(int i = 0; i < argc-1; i++){
            numeros[i] = atoi(argv[i+1]);
        }
        printf("%d", menor_e(numeros, argc-1));
    }
    return 0;
}