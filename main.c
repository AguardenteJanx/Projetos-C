#include <stdio.h>
#include <stdlib.h>

int verificaNumeroTriangular(int *vetor, int tamanho) {
    int i, retorno;
    retorno = 0;
    for (i = 2; i < tamanho; i++) {
        if (i * (i-1) * (i-2) == vetor[i]) {
            retorno = retorno + 1;
            break;
        }
    }

    if (retorno > 0){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int vetorRandom[10], i;

    printf("### Vetor ###\n");
    for(i = 0; i < 10; i++) {
        vetorRandom[i] = rand() % 1000;
        printf(" %d ", vetorRandom[i]);
    }

    int vetorTriangulo[100];


    printf("\n### Valores Triangulares ###\n");
    for (i = 0; i < 10; i++) {
        vetorTriangulo[i] = verificaNumeroTriangular(vetorRandom, 10);
        if (vetorTriangulo[i] == 1) {
            printf(" %d ", vetorRandom[i]);
        }
    }

    printf("\n### Valores nao Triangulares ###\n");
    for (int i = 0; i < 10; ++i) {
        vetorTriangulo[i] = verificaNumeroTriangular(vetorRandom, 10);
        if (vetorTriangulo[i] != 1) {
            printf(" %d ", vetorRandom[i]);
        }
    }

    return 0;
}
