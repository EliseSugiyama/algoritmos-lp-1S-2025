#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

typedef struct sorteio{
    int pri, sec, ter;
} sorteio;

int main(int argc, char* argv[]){

    if(argc != 4){
        printf("Informe 3 argumentos.\n");

        return 1;
    }

    sorteio s;

    s.pri = atoi(argv[1]);
    s.sec = atoi(argv[2]);
    s.ter = atoi(argv[3]);


    if(s.pri >= s.sec){
        printf("O segundo argumento deve ser maior que o primeiro.\n");

        return 1;

    } else if(s.ter < s.pri || s.ter > s.sec){
        printf("O numero esperado deve estar entre %d e %d!\n", s.pri, s.sec);

        return 1;
    }

    srand(time(NULL));

    int num_aleatorio = rand() % (s.sec - s.pri + 1) + s.pri;

    if(num_aleatorio == atoi(argv[3])){
        printf("Parabens! Voce foi sorteado!\n");
    } else {
        printf("Ugh! Mais sorte na proxima vez!\n");
    }

    FILE *arq = fopen("log.txt", "a");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arq, "Numero minimo: %d\n", s.pri);
    fprintf(arq, "Numero maximo: %d\n", s.sec);
    fprintf(arq, "Numero esperado: %d\n", s.ter);
    fprintf(arq, "Numero sorteado: %d\n", num_aleatorio);

    if(num_aleatorio == s.ter){
        fprintf(arq, "Resultado: sorteado!\n\n");
    } else {
        fprintf(arq, "Resultado: nao sorteado!\n\n");
    }

    fclose(arq);

    return 0;
    
}