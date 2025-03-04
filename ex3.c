#include <stdio.h>

int main(){

    int numero, i;
    printf("Digire um numero para calcularmos a tabuada...\n");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++ )
    {
        printf("%d X %d = %d \n", i, numero, i * numero);
}

    return 0;
}
