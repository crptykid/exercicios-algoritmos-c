
#include <stdio.h>

int main() {
    float consumo, soma = 0, media;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo do morador %d (m3): ", i);
        scanf("%f", &consumo);

        soma += consumo;

        if (consumo <= 20) {
            printf("Consumo dentro da media.\n");
        } else {
            printf("Consumo acima da media.\n");
        }
    }

    media = soma / 5;

    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}
