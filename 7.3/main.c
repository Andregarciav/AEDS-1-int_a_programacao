#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[100] = {0};
    int valorProcurado;
    int valorEncontrado = 0;
    int contador;

    for (contador = 0; contador < 100; contador++){

        printf("Digite o %io numero: ", contador + 1);
        scanf("%i", &numeros[contador]);
    }

    printf("\nDigite o valor procurado: ");
    scanf("%i", &valorProcurado);

    printf("\nEncontrado em\n");

    for (contador = 0; contador < 100; contador++){

        if (valorProcurado == numeros[contador]){
            printf("%io numero digitado\n", contador + 1);
            valorEncontrado++;
        }
    }

    if (valorEncontrado == 0){
        printf("ERRO: Valor nao encontrado.\n");
    }

    printf("\n");

    system("pause");
    return 0;

}
