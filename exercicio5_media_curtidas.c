
#include <stdio.h>

int main() {
    int curtidas, soma = 0;
    float media;

    for (int i = 1; i <= 5; i++) {
        printf("Digite as curtidas da publicacao %d: ", i);
        scanf("%d", &curtidas);

        soma += curtidas;
    }

    media = soma / 5.0;

    printf("\nTotal de curtidas: %d\n", soma);
    printf("Media de curtidas: %.2f\n", media);

    return 0;
}
