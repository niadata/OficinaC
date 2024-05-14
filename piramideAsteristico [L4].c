#include <stdio.h>

int numeroLinhas, i = 1, linha = 1;

int main()
{
    printf("Digite os vaolores do numero de linhas:");
    scanf("%d", &numeroLinhas);
    if (numeroLinhas > 10)
    {
        printf("O numero de linhas deve ser menor ou igual a 10");
        return 1;
    }
    else
    {
        while (i <= numeroLinhas)
        {

            while (linha >= 1)
            {
                linha = numeroLinhas - i;
                printf("");
                i++;
            }

            while (linha <= i)
            {
                printf("*");
                linha++;
            }
            printf("\n");
        }
    }
    return 0;
}
