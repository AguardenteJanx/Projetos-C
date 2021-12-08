#include <stdio.h>

int verificaNumeroTriangular(int numero) {
    int i, retorno;
    retorno = 0;
    for (i = 2; i < numero; i++) {
        if (i * (i-1) * (i-2) == numero) {
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
    int numero;

    printf("Digite um numero para ser validado: ");
    scanf("%d", &numero);

    int validacao = verificaNumeroTriangular(numero);

    if(validacao == 1) {
        printf("\nO valor eh Triangular!\n");

        char graph = '*';
        int altura_trian = 5;
        int base_trian = 2 * altura_trian - 1;

        int metade_trian = base_trian/2;

        for (int a = 0; a < altura_trian; a += 1){
            for (int m = 0; m < metade_trian - a; m += 1)
                putchar(' ');

            for (int e = 0; e <= a; e += 1)
                putchar (graph);


            for (int d = 1; d <= a; d += 1)
                putchar(graph);

            putchar ('\n'); //Nova Linha
        }
    } else {
        printf("O valor nao eh triangular!");
    }
}




