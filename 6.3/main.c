#include <stdio.h>
#include <stdlib.h>

int main()
{
    float contadorDenominador;
    float contadorNumerador = 1;
    float S = 1;

    printf("S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.\n\n");

    for (contadorDenominador = 2; contadorDenominador <= 50; contadorDenominador++){

        contadorNumerador = contadorNumerador + 2;

        S = S + (contadorNumerador/contadorDenominador);

    }
    printf("S = %f\n\n", S);
    system("pause");
    return 0;
}
