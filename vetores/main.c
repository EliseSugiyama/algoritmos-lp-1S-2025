#include <stdio.h>

int main(int argc, char* argv[]){

    float notas[] = {9.7, 8.0, 10.00, 5.6};

    //printf("%.2f", notas[1]);
    for(int i = 0; i < 4; i++){
        printf("Nota[%d] %.2f\n", i, notas[i]);
    }

    return 0;
}