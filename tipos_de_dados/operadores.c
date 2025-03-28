#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float n1, n2;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);

    printf("Os resultados sao:\n%.2f + %.2f = %.2f\n", n1, n2, (n1+n2));
    printf("%.2f - %.2f = %.2f\n", n1, n2, (n1-n2));
    printf("%.2f x %.2f = %.2f\n", n1, n2, (n1*n2));
    printf("%.2f : %.2f = %.2f\n", n1, n2, (n1/n2));

    //n1 = atof(argv[1]);
    //n2 = atof(argv[2]);

    //Potenciação 
    float potenciacao = powf(n1, n2);
    printf("%.2f ^ %.2f = %.2f\n", n1, n2, potenciacao);

    //Radiciação
    float raiz_quadrada = sqrtf(n1);
    printf("sqrt de %.2f = %.2f\n", n1, raiz_quadrada);

    float segunda_raiz = sqrtf(n2);
    printf("sqrt de %.2f = %.2f\n", n2, segunda_raiz); 

    //Resto da divisão
    int resto = (int)n1 % (int)n2;
    printf("%.0f %% %.0f = %d\n", n1, n2, resto);

    //Quociente inteiro da divisão
    int quociente_inteiro = n1 / (int) n2;
    printf("%.2f // %.2f = %d\n", n1, n2, quociente_inteiro);

    //Incremento
    n1++;
    n2++;
    printf("%.2f + 1 = %.2f\n%.2f + 1 = %.2f\n", n1-1, n1, n2-1, n2);

    //Decremento
    n1--;
    n2--;
    printf("%.2f - 1 = %.2f\n%.2f - 1 = %.2f\n", n1+1, n1, n2+1, n2);

    //Adição (+)
    //Subtração (-)
    //Multiplicação (*)
    //Divisão inteira (/)
}