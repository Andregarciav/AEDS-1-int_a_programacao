#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int contador;
    int somapar = 0;
    int somaimpar = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (contador = 0; contador <= N; contador = contador + 2){

        somapar = somapar + contador;

    }

    for (contador = 1; contador <= N; contador = contador + 2){

        somaimpar = somaimpar + contador;

    }

    printf("Soma dos naturais pares: %d\n", somapar);
    printf("Soma dos naturais impares: %d\n", somaimpar);
    system("pause");
    return 0;
}
