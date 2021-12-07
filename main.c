#include <stdio.h>
#include <stdbool.h>

//Assinatura da função
void tabuada (int numero) {
    //Início função
    int cont;
    for (cont =1; cont <= 10; cont++) {
        printf("%2d * %d = %2d\n", cont, numero, cont);

    }

} //Fim função

void pulaLinha() {
    printf("\n");
}

//Tipos de funcões:
//Sem retorno e sem parâmetros
void funcaoSemRetornoEParametros() {
    printf("Não tenho retorno nem parâmetro");
}

//Com retorno e sem parâmetros
bool funcaoComRetorno() {
    return true;
}

//Sem retorno e com parâmetros
void funcaoComParametros(int num, int num2) {
    int result;
    for (int i = 1; i <= 10; i++) {
        result = num + num2;
        printf("%2d + %d = %2d\n", num, num2, result);
    }
}

//Com retorno e com parâmetro
char funcaoComTudo(char caractere) {
    return caractere;
}

int main() {
    tabuada(5);
    pulaLinha();
    tabuada(8);
    pulaLinha();
    tabuada(10);

    funcaoSemRetornoEParametros();
    bool recebeFuncao = funcaoComRetorno();

    if (recebeFuncao == true) {
        printf("\nThis function returns true!");
    }

    funcaoComParametros(2, 3);

    funcaoComTudo('A');
    return 0;
}
