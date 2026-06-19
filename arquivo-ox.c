#include <stdio.h>
#include <stdlib.h>

#include "function_aqox.c"

int main(int argc, char *argv[])
{
    char mat[3][3];
    int i, j;
    int k = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] = argv[k][0];

            if (!validar(mat[i][j]))
            {
                printf("Erro: use apenas X ou O\n");
                return 1;
            }

            k++;
        }
    }

    gravar(mat, argv[1]);

    return 0;
}
