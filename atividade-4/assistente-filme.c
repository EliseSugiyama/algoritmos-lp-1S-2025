#include <stdio.h>

int main(int argc, char* argv){

    char opcao, leve, intenso, terror, acao;

    printf("Escolha uma opcao: \n");
    printf("1 - filmes leves\n");
    printf("2 - filmes intensos\n");

    scanf(" %c", &opcao);

    if(opcao == '1'){
            printf("Opcao selecionada: LEVE\n");
            printf("Escolha um genero leve: \n");
            printf("c - comedia\n");
            printf("a - animacao\n");

            scanf(" %c", &leve);

            if(leve == 'c'){
                    printf("Opcao selecionada: COMEDIA\n");
                    printf("Assista a Jumanji!\n");
                
            else if(leve == 'a'){
                    printf("Opcao selecionada: ANIMACAO\n");
                    printf("Assista a Klaus!\n");
            }
            else{
                    printf("Comando invalido!\n");
            }
        
    else if(opcao == '2'){
            printf("Opcao selecionada: INTENSO\n");
            printf("Escolha um genero intenso: \n");
            printf("T - terror\n");
            printf("A - acao\n");

            scanf(" %c", &intenso);

            if(intenso == 'T'){
                    printf("Opcao selecionada: TERROR\n");
                    printf("Escolha um tipo de terror: \n");
                    printf("P - terror psicologico\n");
                    printf("S - terror sobrenatural\n");

                    scanf(" %c", &terror);

                    if(terror == P){

                            printf("Assista a Corra!\n");

                        case 'S':
                            printf("Assista a Smile!\n");
                        
                        default: 
                            printf("Comando invalido!\n");
                    }

                case 'A': 
                    printf("Escolha um tipo de acao: \n");
                    printf("H - Super herois\n");
                    printf("R - Aventura realista\n");

                    scanf("%c", &acao);
                    
                    switch(acao){
                        case 'H':
                            printf("Assita a Homem-Aranha: sem volta para casa!");
                        
                        case 'V': 
                            printf("Assista a Mad max: Estrada Fúria!");
                        
                        default: 
                            printf("Comando invalido!\n");
                    }
            }
    }

    return 0;
}