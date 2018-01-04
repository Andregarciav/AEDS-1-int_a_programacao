#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[100] = {0};
    int vetor2[100] = {0};
    int contador;

    for (contador = 0; contador < 100; contador++){

        vetor1[contador] = contador + 1;
        vetor2[99 - contador] = vetor1[contador];

    }

    printf("** Vetor 1 **\n\n");

    for (contador = 0; contador < 100; contador++){

        printf("%i ", vetor1[contador]);
    }

    printf("\n\n** Vetor 2 **\n\n");

    for (contador = 0; contador < 100; contador++){

        printf("%i ", vetor2[contador]);
    }

    printf("\n\n");

    system("pause");
    return 0;

}
