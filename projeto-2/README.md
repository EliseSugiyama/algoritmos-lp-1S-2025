Este programa, desenvolvido em linguagem C, tem como objetivo auxiliar na organização de dados contidos em arquivos .txt.

Ele aceita dois tipos de arquivos: 
1. Arquivos contendo nomes (strings), um por linha;
2. Arquivos contendo números de ponto flutuante (floats), um por linha;
O programa lê o conteúdo, ordena os dados (alfabeticamente ou numericamente), e gera um novo arquivo de saída com o sufixo "_sorted.txt".

-- Como compilar: 
    gcc .\ordenador.c -o ordenador  # isso criará um executável chamado "ordenador.exe" no Windows.

-- Preparação dos arquivos de entrada:
Crie seus arquivos de texto com os dados que deseja ordenar.
Exemplo:

    nomes.txt:
    Carlos
    Ana
    Beatriz
    Eduardo

    numeros.txt:
    5.3
    2.1
    9.0
    1.2

-- Como executar:
- Para ordenar nomes (strings):
    ./ordenador -s nomes.txt    # Gera: nomes_sorted.txt

- Para ordenar números (floats):
    ./ordenador -f numeros.txt  # Gera: numeros_sorted.txt


Este projeto foi desenvolvido com fins educacionais para prática de:
    - Manipulação de arquivos em C;
    - Uso de ponteiros e alocação dinâmica de memória (malloc, realloc, free);
    - Implementação do algoritmo de ordenação Bubble Sort;
    - Interação via linha de comando;