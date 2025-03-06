#include <stdio.h>

// Função recursiva para imprimir numero de n até 1
void recucivo(int numero){
    if (numero > 0 ){
        printf("%d \n", numero); // Imprimir o valor atual de n
        recucivo(numero - 1); // Chama a si mesmo com n - 1
    }
}


int main(){

    int quantidade = 10;  
    printf("Contagem regressiva....\n");
    recucivo(quantidade);
    


    return 0;
}