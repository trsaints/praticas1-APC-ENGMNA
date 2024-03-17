// 1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
#include <stdio.h>

int main() {
    float avaliacao1, avaliacao2, media_final;

    printf("Digite a primeira nota: ");
    scanf("%f", &avaliacao1);

    while (avaliacao1 < 0.0f | avaliacao1 > 10.0f) {
        printf("Nota inválida. Digite uma nota entre 0.00 e 10.00\nSua nota:");
        scanf("%f", &avaliacao1);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &avaliacao2);

    while (avaliacao2 < 0.0f | avaliacao2 > 10.0f) {
        printf("Nota inválida. Digite uma nota entre 0.00 e 10.00\nSua nota:");
        scanf("%f", &avaliacao2);
    }

    media_final = (avaliacao1 * 0.4f) + (avaliacao2 * 0.6f);

    printf("Sua nota é: %f", media_final);

    return 0;
}
