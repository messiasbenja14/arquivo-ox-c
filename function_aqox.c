#include <stdio.h>

int validar(char c)
{
    if (c == 'X' || c == 'O')
        return 1;

    return 0;
}

void gravar(char mat[3][3], char arq[])
{
    FILE *f = fopen(arq, "w");

    if (f == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return;
    }

    fprintf(f, "| %c | %c | %c |\n",
            mat[0][0], mat[0][1], mat[0][2]);

    fprintf(f, "| %c | %c | %c |\n",
            mat[1][0], mat[1][1], mat[1][2]);

    fprintf(f, "| %c | %c | %c |\n",
            mat[2][0], mat[2][1], mat[2][2]);

    fprintf(f, "\nCriado por Benjamim Messias");

    fclose(f);
}
