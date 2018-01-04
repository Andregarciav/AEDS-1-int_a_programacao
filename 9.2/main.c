#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {2, 56, 14, 7, 98};
    int contador;
    float soma = 0;
    float media;

    for (contador = 0; contador < 5; contador++){
        soma = soma + vetor[contador];
    }

    media = soma/5;

    printf("Media = %f\n", media);

    system("pause");
    return 0;
}
