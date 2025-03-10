#include <stab.h>
// Vertor Matriz


int main(){
    int index;

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

    int matris [2][2] = {
        {0},{1},
        {2},{3}
    };
    return 0;
}