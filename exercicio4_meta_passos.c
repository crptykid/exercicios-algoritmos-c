
#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        printf("Digite os passos realizados nesta hora: ");
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Quantidade invalida! Digite novamente.\n");
            continue;
        }

        total += passos;
        horas++;

        printf("Total de passos: %d\n", total);
    }

    printf("\nMeta de 10000 passos atingida!\n");
    printf("Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}
