
#include <stdio.h>

int main() {
    float nota, soma = 0, media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite uma nota de 0 a 10: ");
            scanf("%f", &nota);
        }

        soma += nota;
    }

    media = soma / 10;

    printf("\nMedia geral do atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: a media de atendimento esta abaixo de 7!\n");
    } else {
        printf("Media de atendimento satisfatoria.\n");
    }

    return 0;
}
