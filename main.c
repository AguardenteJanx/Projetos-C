#include <stdio.h>
#define V 5

int PosicaoMaiorIdade;
float media;
void maiorIdade(int *A, int tamanho){
    int i;
    for (i = 1; i < tamanho; i++) {
        if (A[i] > A[i-1]) {
            PosicaoMaiorIdade = i;
        }
    }
    if (A[PosicaoMaiorIdade] < A[0]) {
        PosicaoMaiorIdade = 0;
    }
}


double mediaIdades(int *A, int tamanho) {
    int i;
    for (i = 0; i < tamanho; ++i) {
        media = media + A[i];
    }

    media = media / tamanho;
    return media;
}

void classificacaoIdades(int *A, int *B, int tamanhoA, int tamanhoB){
    int i, menor10 = 0, entre10e15 = 0, entre16e20 = 0, maior20 = 0;
    for (i = 0; i < tamanhoA; i++) {
        if (A[i] < 10) {
            menor10 = menor10 + 1;
        }

        if (A[i] > 10 && A[i] <= 15) {
            entre10e15 = entre10e15 + 1;
        }

        if (A[i] >= 16 && A[i] <= 20) {
            entre16e20 = entre16e20 + 1;
        }

        if (A[i] > 20) {
            maior20 = maior20 + 1;
        }
    }

        B[0] = menor10;
        B[1] = entre10e15;
        B[2] = entre16e20;
        B[3] = maior20;
}

int main() {
    int A[V], i, B[4];

    for (i = 0; i < V; ++i) {
        printf("Digite a idade %d: ", i);
        scanf("%d", &A[i]);
    }

    maiorIdade(A, V);
    printf("\nA pessoa com a maior idade tem: %d", A[PosicaoMaiorIdade]);
    printf("\nE sua posicao eh: %d", PosicaoMaiorIdade);

    double idadeMedia = mediaIdades(A, V);
    printf("\nA media das idades eh: %f", idadeMedia);

    classificacaoIdades(A, B, V, 4);
    printf("\n### Classifcacao das idades ###");
    printf("\nIdades menores que 10: %d", B[0]);
    printf("\nIdades entre 10 e 15: %d", B[1]);
    printf("\nIdades entre 16 e 20: %d", B[2]);
    printf("\nIdades maiores que 20: %d", B[3]);
}