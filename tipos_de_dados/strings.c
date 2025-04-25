#include <stdio.h>
#define TAM 255
#include <string.h> 

int main(int argc, char* argv[]){

    // Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    //char palavra3[255];
    //char frase1[2] --> ainda compila a frase completa
    //char frase1[255]; 
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1); 
    printf("%s\n", palavra2); 

    printf("%c\n", palavra2[4]);
    printf("palavra2[5] = %c\n", palavra2[5]);


    //LEITURA SEGURA DE STRINGS: FGETS 
    printf("\nDigite uma frase: ");
    //scanf("%s", frase1); --> lê a string até o espaço
    fgets(frase1, TAM, stdin);
    //f do "fgets" lê até o limite
    //stdin --> entrada padrão

    printf("%s\n", frase1); 

    //getchar(); --> limpa a área de entrada, mas pode pedir para digitar algo
    //fflush(); --> somente limpa a área de entrada
    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
    fflush(stdin); 
    fgets(palavra4, TAM, stdin); 

    if(strcmp(palavra3, palavra4) == 0){
        printf("\n- As palavras sao iguais!\n");
    } else {
        printf("\n- As palavras nao sao iguais!\n");
    }

    printf("\nTamanho da palavra 3 eh: %d\n", strlen(palavra3)-1);

    for(int i = 0; i < strlen(palavra3)-1; i++){
        printf("%c\n", palavra3[i]);
    }

    //IMPRIMI A PALAVRA 3 AO CONTRARIO --> -1 || >= 0

    for(int i = strlen(palavra3)-1; i > -1; i--){
        printf("%c\n", palavra3[i]);
    }

    // Concatena palavra3 e palavra4
    strcat(palavra3, palavra4);
    printf("\nPalavra 3 concatenada = %s", palavra3);

    return 0;
}