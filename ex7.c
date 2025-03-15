#include <stdio.h>
// Vertor Matriz


int main(){
    /*int index;

    char *nomesAlunos [3][3]= {
        {"aluno0", "pt: 30", "mat: 90"},
        {"aluno1", "pt: 60", "mat: 60"},
        {"aluno2", "pt: 90", "mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para o aluno 0, digita = 0 \n");
    printf("Para o aluno 1, digita = 1 \n");
    printf("Para o aluno 2, digita = 2 \n");

    scanf("%d", &index);

    printf("A nota do %s são: %s, %s \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2] );
*/
    // Declaração e inicialização da matriz
  
        // Declaração e inicialização da matriz 10x10 com zeros
        int matris[10][10] = {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,3,3,3,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
        };
    
        // Declaração do array de letras para rotular as linhas
        char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
        // Exibição da matriz formatada como tabela
        printf("   "); // Espaço para alinhar os rótulos das colunas
        for (int i = 1; i < 11; i++) {
            printf("%d ", i); // Imprime os números das colunas (0-9)
        }
        printf("\n");
    
        for (int i = 0; i < 10; i++) {
            printf("%c  ", letras[i]); // Imprime a letra correspondente à linha
    
            for (int j = 0; j < 10; j++) {
                printf("%d ", matris[i][j]); // Imprime os valores da matriz
            }
            printf("\n"); // Pula para a próxima linha
        }
    
        return 0;
    }
    