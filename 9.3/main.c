#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[2][2] = {0};
    int i;
    int j;
    int soma = 0;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            matriz[i][j] = (i+2)*(j+2);
            soma = soma + matriz[i][j];
        }
    }

    printf("Soma = %i\n", soma);

    system("pause");
    return 0;
}
