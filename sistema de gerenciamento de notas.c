#include <stdio.h>

int main (){
     int opcao;
     float nota1,nota2,media;
    
    printf("Menu de Gerenciamento de estudante\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. sair\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a media\n");
        printf("Digite a primeira nota\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota\n");
        scanf("%f", &nota2);
        // testar a condição se a nota é >= 0 e se é <= 10
        if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10))
        {
            media = (nota1 + nota2) / 2;
            printf("A media é %.2f\n", media);
        } else {
            printf("entrada com valor errado de notas");
        }
        break;
       case 2:
        printf("Determinar Status\n");
        printf("Entre com valor da Media\n");
        scanf("%f", &media)
        break;
       case 3:
        printf("Sair do progama...\n");
        break;
    
    default:
        printf("Opção inválida");
        break;
    }




return 0;
}