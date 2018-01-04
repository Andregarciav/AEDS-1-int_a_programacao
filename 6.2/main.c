#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float contador;
    float Hn = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (contador = 1; contador <= N; contador = contador + 1){

        Hn = Hn + (1/contador);

    }
    printf("\nH(%i) = %f\n\n", N, Hn);
    system("pause");
    return 0;
}
