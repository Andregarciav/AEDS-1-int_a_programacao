#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {2, 56, 14, 7, 98};
    int contador;
    int soma = 0;

    for (contador = 0; contador < 5; contador++){
        soma = soma + vetor[contador];
    }

    printf("Soma = %i\n", soma);

    system("pause");
    return 0;
}
