#include <stdio.h>
#include "teste.h"

int tabuada(int d)
{
    int i;
    printf("Tabuada de %d:\n", d);
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", d * i); // Aqui não pode ser return, pois a função não retorna nada.
    }
}

int main()
{
    int d;
    printf("Digite qual tabuada deseja saber");
    scanf("%d", &d);
    tabuada(d);
    return 0;
}