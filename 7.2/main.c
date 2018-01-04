#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[100] = {0};
    float soma = 0;
    float media = 0;
    int contador;

    for (contador = 0; contador < 100; contador++){

        printf("Digite a nota do aluno %i: ", contador + 1);
        scanf("%f", &notas[contador]);
        soma = soma + notas[contador];
    }

    media = soma / 100;

    printf("\n\nMedia das notas: %f\n", media);
    printf("\n** Alunos abaixo da media **\n\n", media);

    for (contador = 0; contador < 100; contador++){

        if (notas[contador] < media){
            printf("Aluno %i: Nota %f\n", contador + 1, notas[contador]);
        }

    }

    system("pause");
    return 0;

}
