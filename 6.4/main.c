#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float contadorDenominador;
    float contadorNumerador = 1;
    float S = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (contadorDenominador = 2; contadorDenominador <= N; contadorDenominador++){

        contadorNumerador = contadorNumerador + 2;

        S = S + (contadorNumerador/contadorDenominador);

    }
    printf("S(%i) = %f\n\n", N, S);
    system("pause");
    return 0;
}
