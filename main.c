#include <stdio.h>
#define V 10

int contaVogais(char *vetorDeCaracteres, int tamanhoVetor) {
    int i, soma = 0;

    for (i = 0; i < tamanhoVetor; i++) {

        if (vetorDeCaracteres[i] == 'a' || vetorDeCaracteres[i] == 'A') {
            soma += 1;
        }

        if (vetorDeCaracteres[i] == 'e' || vetorDeCaracteres[i] == 'E') {
            soma += 1;
        }

        if (vetorDeCaracteres[i] == 'i' || vetorDeCaracteres[i] == 'I') {
            soma += 1;
        }

        if (vetorDeCaracteres[i] == 'o' || vetorDeCaracteres[i] == 'O') {
            soma += 1;
        }

        if (vetorDeCaracteres[i] == 'u' || vetorDeCaracteres[i] == 'U') {
            soma += 1;
        }
    }

    return soma;
}

int main() {
    char vetorDeCaracteres[V];
    int i;

    for(i = 0; i < V; i++) {
        printf("\nDigite um caractere: ");
        scanf("%c", &vetorDeCaracteres[i]);
        setbuf(stdin, NULL);
    }

    int totalDeVogais = contaVogais(vetorDeCaracteres, V);
    printf("O total de vogais eh: %d", totalDeVogais);
}
