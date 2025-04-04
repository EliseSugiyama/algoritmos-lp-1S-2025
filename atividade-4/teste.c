#include <stdio.h>

int main(int argc, char* argv){

    char opcao, intenso, terror, acao, leve; 

    //printf("filme.c\n");
    printf("Escolha uma opcao: \n");
    printf("1 - filmes leves\n");
    printf("2 - filmes intensos\n");

    scanf("%c", &opcao);

    if(opcao =='1'){
        printf("leve\n");
    
        printf("Escolha entre um genero leve: \n");
            printf("c - comedia\n");
            printf("a - animacao\n");
        
        scanf(" %c", &leve);

            if(leve =='c'){
                    printf("Comedia\n");
                    printf("Assista a Jumanji!\n");
            }

            else if (leve == 'a'){
                    printf("Animacao\n");
                    printf("Assista a Klaus!\n");
            }

            else{
                printf("Error!\n");
            }
    }
    return 0;}