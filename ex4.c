#include <stdio.h>
    int main() {
        // i e j inciados ao mesmo tempo
        for(int i = 0, j = 10; i < j; i++, j--){
            printf("i = %d j = %d \n", i, j);
        }
        
        // controle simultaneo

        /* exemplo de condições multiplas
        && ou ||
        i e j iniciados ao mesmo tempo
        ++ ou --
        */
       for (int i = 0, j = 10;  i < 5 && j > 5; i++, j--){
        printf("i = %d, j = %d\n", i, j);
       }

       // O perador ternario para teste
       for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2)
       {
            printf("%d ", i);
       }
       printf("\n\n");
       //Controle do loop usando "continue" ou "break"
       for (int i = 0; i < 10; i++)
       {
        if (i == 5) continue; //Pula a interação quando i for igual 5
        if (i == 8) break; // sai do loop quando i for igual a 8 
        printf("%d ", i);
        }
        
       
       return 0;
    }