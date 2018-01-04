#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int menor;
    int maior;
    int contador = 2;
    int sentinela = -1;

    printf("Digite o 1o numero: ");
    scanf("%d", &N);

    if (N == sentinela){
            printf("\nVoce nao digitou nenhum valor.\n");
            return 0;
    }
    else {

        menor = N;
        maior = N;

        while (N != sentinela){

            if (N < menor){menor = N;}
            else if (N > maior){maior = N;}
            printf("Digite o %io numero: ", contador);
            scanf("%d", &N);
            contador = contador + 1;

        }
    }
    printf("\nMaior valor: %i\n", maior);
    printf("Menor valor: %i\n", menor);
    system("pause");
    return 0;
}
