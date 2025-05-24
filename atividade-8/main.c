#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    float Xa, Xb, Ya, Yb, R;
} Ponto;

int main(int argc, char* argv[]){

    if(argc != 5){
        printf("Informe 4 argumentos.");
        
        return 1;
    }
    
    Ponto a;
    a.Xa = atof(argv[1]);
    a.Xb = atof(argv[2]);
    a.Ya = atof(argv[3]);
    a.Yb = atof(argv[4]);

    a.R = sqrt(pow(a.Xb - a.Xa, 2) + pow(a.Yb - a.Ya, 2));

    printf("Distancia: %.2f", a.R);    

    return 0;
}