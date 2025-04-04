#include <stdio.h>

int main(int argc, char* argv[]){

    char opcoes, leve, comedia, animacao, intenso, terror, acao;

    printf("\n============================================================================\n");
    printf("Bem-vindo ao assistente de escolha de filmes!\nEu irei te recomendar algo para assistir de acordo com as suas preferencias!\n");
    printf("============================================================================\n");

    printf("\nEscolha uma das opcoes: \n");
    printf("--~--~--~--~--~--~--~--\n");
    printf("1 - filmes leves\n");
    printf("-----------------------\n");
    printf("2 - filmes intensos\n");
    printf("=======================\n");

    scanf(" %c", &opcoes);

    if(opcoes == '1'){
        printf("\n========================================\n");
        printf("Opcao selecionada: FILMES LEVES\n");
        printf("========================================\n");
        printf("\nEscolha uma opcao de filme leve: \n");
        printf("--~--~--~--~--~--~--~--~--~--~--\n");
        printf("C - Comedia\n");
        printf("--------------------------------\n");
        printf("A - Animacao\n");
        printf("================================\n");

        scanf(" %c", &leve);
        
        if(leve == 'C' || leve == 'c'){
            printf("\n========================================\n");
            printf("Opcao selecionada: COMEDIA\n");
            printf("========================================\n");
            printf("\nEscolha uma opcao de comedia: \n");
            printf("--~--~--~--~--~--~--~--~--~--\n");
            printf("R - Comedia Romantica\n");
            printf("-----------------------------\n");
            printf("M - Comedia Musical\n");
            printf("=============================\n");

            scanf(" %c", &comedia);

            if(comedia == 'R' || comedia == 'r'){
                printf("\n========================================\n");
                printf("Opcao selecionada: COMEDIA ROMANTICA\n");
                printf("========================================\n");
                printf("\n-----------------------------------------\n");
                printf("Recomendacao: 'A proposta (2009)'\n");
                printf("-----------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else if(comedia == 'M' || comedia == 'm'){
                printf("\n========================================\n");
                printf("Opcao selecionada: COMEDIA MUSICAL\n");
                printf("========================================\n");
                printf("\n---------------------------------------\n");
                printf("Recomendacao: 'Wicked (2024)!\n");
                printf("----------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else{
                printf("\n======================\n");
                printf("ERROR! OPCAO INVALIDA!\n");
                printf("======================\n");
            }
        }

        else if(leve == 'A' || leve == 'a'){
            printf("\n========================================\n");
            printf("Opcao selecionada: ANIMACAO\n");
            printf("========================================\n");
            printf("\nEscolha uma opcao de animacao:\n");
            printf("--~--~--~--~--~--~--~--~--~--~\n");
            printf("L - Indicacao livre\n");
            printf("------------------------------\n");
            printf("Z - Para maiores de 10 anos\n");
            printf("==============================\n");

            scanf(" %c", &animacao);

            if(animacao == 'L' || animacao == 'l'){
                printf("\n========================================\n");
                printf("Opcao selecionada: INDICACAO LIVRE\n");
                printf("========================================\n");
                printf("\n------------------------------------------------\n");
                printf("Recomendacao: 'Como treinar o seu dragao (2010)'\n");
                printf("------------------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else if(animacao == 'Z' || animacao == 'z'){
                printf("\n==========================================\n");
                printf("Opcao selecionada: PARA MAIORES DE 10 ANOS\n");
                printf("==========================================\n");
                printf("\n--------------------------------------------------\n");
                printf("Recomendacao: 'Homem-Aranha no Aranhaverso (2019)'\n");
                printf("--------------------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else{
                printf("\n======================\n");
                printf("ERROR! OPCAO INVALIDA!\n");
                printf("======================\n");
            }
        }

        else{
            printf("\n======================\n");
            printf("ERROR! OPCAO INVALIDA!\n");
            printf("======================\n");
    }
}

    else if(opcoes == '2'){
        printf("\n========================================\n");
        printf("Opcao selecionada: FILMES INTENSOS\n");
        printf("========================================\n");
        printf("\nEscolha uma opcao de filme intenso: \n");
        printf("--~--~--~--~--~--~--~--~--~--~--~--\n");
        printf("T - Terror\n");
        printf("-----------------------------------\n");
        printf("A - Acao\n");
        printf("===================================\n");

        scanf(" %c", &intenso);

        if(intenso == 'T' || intenso == 't'){
            printf("\n========================================\n");
            printf("Opcao selecionada: TERROR\n");
            printf("========================================\n");
            printf("\nEscolha uma opcao de terror: \n");
            printf("--~--~--~--~--~--~--~--~--~-\n");
            printf("P - Terror Psicologico\n");
            printf("----------------------------\n");
            printf("S - Terror Sobrenatural\n");
            printf("============================\n");

            scanf(" %c", &terror);

            if(terror == 'P' || terror == 'p'){
                printf("\n========================================\n");
                printf("Opcao selecionada: TERROR PSICOLOGICO\n");
                printf("========================================\n");
                printf("\n----------------------------\n");
                printf("Recomendacao: 'Corra (2017)'\n");
                printf("----------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else if(terror == 'S' || terror == 's'){
                printf("\n========================================\n");
                printf("Opcao selecionada: TERROR SOBRENATURAL\n");
                printf("========================================\n");
                printf("\n-----------------------------\n");
                printf("Recomendacao: 'Sorria (2022)'\n");
                printf("-----------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else{
                printf("\n======================\n");
                printf("ERROR! OPCAO INVALIDA!\n");
                printf("======================\n");
            }
        }

        else if(intenso == 'A' || intenso == 'a'){
            printf("\n========================================\n");
            printf("Opcao selecionada: ACAO\n");
            printf("========================================\n");
            printf("\nEscolha uma opcao de acao: \n");
            printf("--~--~--~--~--~--~--~--~--\n");
            printf("S - Super Herois\n");
            printf("--------------------------\n");
            printf("A - Aventura Realista\n");
            printf("==========================\n");

            scanf(" %c", &acao);

            if(acao == 'S' || acao == 's'){
                printf("\n========================================\n");
                printf("Opcao selecionada: SUPER HEROIS\n");
                printf("========================================\n");
                printf("\n--------------------------------------------------------\n");
                printf("Recomendacao: 'Homem-Aranha: sem volta para casa (2021)'\n");
                printf("--------------------------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else if(acao == 'A' || acao == 'a'){
                printf("\n========================================\n");
                printf("Opcao selecionada: AVENTURA REALISTA\n");
                printf("========================================\n");
                printf("\n-------------------------------------\n");
                printf("Recomendacao: 'Amor e Monstros (2020)'\n");
                printf("-------------------------------------\n");
                printf("\n========================================\n");
                printf("OBRIGADO POR USAR O ASSISTENTE DE FILME!\n");
                printf("========================================\n");
            }

            else{
                printf("\n======================\n");
                printf("ERROR! OPCAO INVALIDA!\n");
                printf("======================\n");
        }
    }

        else{
            printf("\n======================\n");
            printf("ERROR! OPCAO INVALIDA!\n");
            printf("======================\n");
    }
}
    else{
        printf("\n======================\n");
        printf("ERROR! OPCAO INVALIDA!\n");
        printf("======================\n");
    }

    return 0;

}