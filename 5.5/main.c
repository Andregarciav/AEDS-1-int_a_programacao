#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int contador;

    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("Divisores: ");

    for (contador = 1; contador <= N; contador = contador + 1){
            if ((N%contador) == 0){
                printf("%d ", contador);
            }
    }
    printf("\n");
    system("pause");
    return 0;
}
