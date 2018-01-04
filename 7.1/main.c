#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[100] = {0};
    int contador;

    for (contador = 0; contador < 100; contador++){

        printf("Digite a nota do aluno %i: ", contador + 1);
        scanf("%f", &notas[contador]);
    }

    printf("\n\nAs notas foram armazenadas com sucesso.\n");

    system("pause");
    return 0;

}
