#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

typedef struct sorteio{
    int pri, sec, ter;
} sorteio;

int main(int argc, char* argv[]){

    if(argc != 4){
        printf("Informe 3 argumentos");

        return 1;
    }

    sorteio s;

    s.pri = atof(argv[1]);
    s.sec = atof(argv[2]);
    s.ter = atof(argv[3]);


    if(argv[2] < argv[1]){
        printf("O segundo argumento deve ser maior que o primeiro.");

        return 1;
    } else if(argv[1] == 0 || argv[2] == 0 || argv[3] == 0){
        printf("Os argumentos precisam ser maior que 0.");

        return 1;
    }

    srand(time(NULL));

    int num_aleatorio = rand() % (s.sec - s.pri + 1) + s.pri;

    if(num_aleatorio == atoi(argv[3])){
        printf("Parabens! Voce foi sorteado!\n");
    } else {
        printf("Ugh! Mais sorte na proxima vez!\n");
        printf("O numero sorteado foi: %d", num_aleatorio);
    }

    return 0;
    
}