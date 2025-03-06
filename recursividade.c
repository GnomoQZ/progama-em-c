#include <stdio.h>

void recucivo(int numero){
    if (numero > 0 ){
        printf("%d \n", numero);
        recucivo(numero - 1);
    }
}


int main(){

    int quantidade = 10;  
    printf("Contagem regressiva....\n");
    recucivo(quantidade);
    


    return 0;
}