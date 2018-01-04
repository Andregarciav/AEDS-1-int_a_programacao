#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ntermos;
    int contador;
    int acumulador;
    float media = 0;

    printf("Quantos numeros deseja calcular a media? ");
    scanf("%d", &Ntermos);

    for (contador = 1; contador <= Ntermos; contador = contador + 1){

            printf("Escreva o termo %d: ", contador);
            scanf("%d", &acumulador);
            media = media + acumulador;

    }

    media = media / Ntermos;

    printf("Media: %f\n", media);
    system("pause");
    return 0;
}
