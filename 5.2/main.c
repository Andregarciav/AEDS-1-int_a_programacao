#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int contador;
    int somanaturais = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (contador = 0; contador <= N; contador = contador + 1){

        somanaturais = somanaturais + contador;

    }

    printf("Soma: %d\n", somanaturais);
    system("pause");
    return 0;
}
