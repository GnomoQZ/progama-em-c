#include <stdio.h>

void recucivo(int numero){
    if (numero > 0 ){
        printf("%d \n", numero);
        recucivo(numero - 1);
    }
}


int main(){

    int quantidade = 10;
    recucivo(quantidade);   
    printf("Contagem regressiva....");
    recucivo(quantidade);
    


    return 0;
}