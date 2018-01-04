#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[10][10] = {0};
    int i;
    int j;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i < j){matriz[i][j] = (2*(i+1)) + (7*(j+1)) - 2;}
        }
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i == j){matriz[i][j] = (3*(i+1)*(i+1)) - 1;}
        }
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i > j){matriz[i][j] = (4*(i+1)*(i+1)*(i+1)) + (5*(j+1)*(j+1)) + 1;}
        }
    }

    printf("A[i][j] =\n");

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%i\n", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
