#include <stdio.h>

int x, y, variavel = 1, i = 1;

int main()
{
    printf("Digite os vaolores de X e Y:");
    scanf("%d %d", &x, &y);
    while (i <= y)
    {
        variavel = variavel * x;
        i++;
    }
    printf("O valor de X elevado a Y é: %d", variavel);
}