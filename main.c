#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
    //Esse tipo de variável só pode salvar um valor por vez
    float x = 10;
    printf("x = %f\n", x);

    x = 20;
    printf("x = %f\n", x);
    system("pause");

    /*Array: Conjunto de variáveis do mesmo tipo usando o mesmo nome*/
    //Formato:
    //tipo nome_array[tamanho];

    //Exemplo:
    float notas[100];
    //Guarda a nota de 100 alunos

    //O tamanho de um array precisa ser constante inteira
    int n = 5;
    float F[n+1]; //Funciona
    char texto[220]; //Funciona
    int Vetor[n]; //Errado -> Não se pode usar uma variável para definir o tamanho de um array
    //int V[4.5]; //Errado

    //As posições do array funcionam como variáveis indexadas
    //usa-se um indice para dizer qual a posição do array que está sendo acessada
    float notaAlunos[100];
    notaAlunos[0] = 81; //Primeiro índice;
    notaAlunos[1] = 90; //Segundo índice;
    notaAlunos[99] = 79; //Último índice;

    float leituraArray [100], vetor[100];
    printf("\nDigite um valor para o array: ");
    scanf("%f", &leituraArray[5]); //Lê um valor para a quarta posição do array.
    leituraArray[0] = 10; //Atribuí um valor para a primeira posição do array.
    leituraArray[1] = leituraArray[5] + leituraArray[0]; //Expressão;
    printf("O valor da segunda posicao eh: %f\n", leituraArray[1]);

    //leituraArray = vetor; //Isso não funciona -> O programa não consegue copiar to-do o array de uma vez só

    system("pause");

    //Cálculo da média
    float notaMedia[N], media = 0.0;
    int i;

    for (i = 0; i < N; ++i) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notaMedia[i]);
        media = media + notaMedia[i];
    }

    media = media / N;

    for (i = 0; i < N; i++) {
        if(notaMedia[i] > media) {
            printf("Os alunos com maiores notas foram: \n");
            printf("O Aluno %d: %f\n", i, notaMedia[i]);
        }
    }

    system("pause");

    return 0;
}
