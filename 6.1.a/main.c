#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int menor;
    int maior;
    int contador;

    printf("Digite o 1o numero: ");
    scanf("%d", &N);

    menor = N;
    maior = N;

    for (contador = 2; contador <= 50; contador = contador + 1){
            printf("Digite o %io numero: ", contador);
            scanf("%d", &N);
            if (N < menor){menor = N;}
            else if (N > maior){maior = N;}

    }
    printf("\nMaior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);
    system("pause");
    return 0;
}
