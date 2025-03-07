#include <stab.h>

void recucivo ( int numero){
    if (numero > 0 ){
        printf("%d\n",numero); // Decressente
        recucivo(numero - 1);
        printf("%d\n",numero); // Crecente
    }
}




 int main(){

    int quantidade = 10;

    printf("Contagem regressiva.... \n");
    recucivo(quantidade);


    return 0;
    }