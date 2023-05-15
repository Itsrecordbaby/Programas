#include <stdio.h>

int main()
{
    int x[3][2] = {0}, y[3][2] = {0}, z[3][2] = {0};
    int i, j;

    printf("Ingrese los valores de la matriz X:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de la fila %d y columna %d: ", i + 1, j + 1);
            scanf("%d", &x[i][j]);
        }
    }

    printf("Ingrese los valores de la matriz Y:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de la fila %d y columna %d: ", i + 1, j + 1);
            scanf("%d", &y[i][j]);
        }
    }

    printf("La suma de las matrices X e Y es:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
