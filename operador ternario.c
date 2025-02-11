#include <stdio.h>
 int main(){
    int temperatura = 10;
    int resultado;
resultado = temperatura > 30 ? 1 : 0;
if (resultado == 1)
    {
        printf("Estar calor!\n");
    } else {
        printf("Estaá frio!\n");
    }

 return 0;
 }