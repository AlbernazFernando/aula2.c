#include <stdio.h>

int main() {
    float inicio, fim, duracao;
    printf("Que horas teve inicio 1 - 12: ");
    scanf("%f, &inicio");
    printf("Que horas que teve o fim 1 - 12: ");
    scanf("%f, &fim");
    duracao = fim + inicio; 
    printf("A duracao da partida foi de : %f\n", duracao);

    return 0;
}
