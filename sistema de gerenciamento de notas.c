#include <stdio.h>

#define ARQUIVO_NOTAS "notas.txt"

void salvar_notas(float nota1, float nota2) {
    FILE *arquivo = fopen(ARQUIVO_NOTAS, "w"); // Abre o arquivo em modo de escrita
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return;
    }
    fprintf(arquivo, "%.2f %.2f\n", nota1, nota2); // Escreve as notas no arquivo
    fclose(arquivo);
}

int carregar_notas(float *nota1, float *nota2) {
    FILE *arquivo = fopen(ARQUIVO_NOTAS, "r"); // Abre o arquivo em modo de leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura! Calcule a média primeiro.\n");
        return 0; // Retorna 0 indicando erro
    }
    fscanf(arquivo, "%f %f", nota1, nota2); // Lê as notas do arquivo
    fclose(arquivo);
    return 1; // Retorna 1 indicando sucesso
}

int main() {
    int opcao;
    float nota1, nota2, media;

    do {
        printf("\nMenu de Gerenciamento de Estudante\n");
        printf("1. Calcular Media\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nCalcular a Média\n");
                
                do {
                    printf("Digite a primeira nota (0 a 10): ");
                    scanf("%f", &nota1);
                    if (nota1 < 0 || nota1 > 10)
                        printf("Nota inválida! Tente novamente.\n");
                } while (nota1 < 0 || nota1 > 10);

                do {
                    printf("Digite a segunda nota (0 a 10): ");
                    scanf("%f", &nota2);
                    if (nota2 < 0 || nota2 > 10)
                        printf("Nota inválida! Tente novamente.\n");
                } while (nota2 < 0 || nota2 > 10);

                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f\n", media);

                // Salva as notas no arquivo
                salvar_notas(nota1, nota2);
                break;

            case 2:
                if (!carregar_notas(&nota1, &nota2)) {
                    break; // Sai do case se não conseguiu carregar notas
                }
                media = (nota1 + nota2) / 2;
                printf("\nDeterminar Status\n");
                printf("Média carregada do arquivo: %.2f\n", media);

                if (media >= 7) {
                    printf("APROVADO!\n");
                } else if (media >= 5) {
                    printf("Recuperação!\n");
                } else {
                    printf("Reprovado!\n");
                }
                break;

            case 3:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 3); // Continua rodando até o usuário escolher "Sair"

    return 0;
}
