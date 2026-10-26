
#include <stdio.h>

int main() {
    float moeda, total = 0;
    char resposta;

    do {
        printf("Digite o valor da moeda (0.50, 1.00 ou 2.00): ");
        scanf("%f", &moeda);

        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00) {
            total += moeda;
            printf("Moeda adicionada!\n");
        } else {
            printf("Moeda invalida!\n");
        }

        printf("Deseja adicionar outra moeda? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("\nTotal acumulado: R$ %.2f\n", total);

    return 0;
}
