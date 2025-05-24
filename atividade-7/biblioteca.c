int maior_2e(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    } else {
        maior = b;
    }
    return maior;
}

int menor_2e(int a, int b){
    int menor;
    if(a < b){
        menor = a;
    } else {
        menor = b;
    }
    return menor; 
}

int maior_e(int numeros[], int n){
    int maior = numeros[0];
    for(int i = 0; i < n; i++){
        maior = maior_2e(maior, numeros[i]);
    }
    return maior; 
}

int menor_e(int numeros[], int n){
    int menor = numeros[0];
    for(int i = 0; i < n; i++){
        menor = menor_2e(menor, numeros[i]);
    }
    return menor; 
}

