#include <stdio.h>

int main() {
    int num1, num2;
    int maior;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    num1 > num2 ? (maior = num1) : (maior = num2);
    
    if (num1 > num2)
    {
        printf("O nuemro maior é %d\n", num1);
    } else{
        printf("O numero mairo é %d\n", num2);
    }

    printf("O numero maior é %d\n", maior);

return 0;

}