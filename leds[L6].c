#include <stdio.h>
#include "teste.h"

int totalLEDS(int n)
{
    int i, soma = 0;
    soma += ledsAlgarismo(n);
    return soma;
}

int ledsAlgarismo(int a)
{
    int i, n, tamanho, leds = 0;
    ;
    tamanho = strlen(n);
    if (a == 0)
    {
        return (6);
    }
    if (a == 1)
    {
        leds += 2;
        printf("a");
    }
    if (a == 2)
    {
        return (5);
    }
    if (a == 3)
    {
        return (5);
    }
    if (a == 4)
    {
        return (4);
    }
    if (a == 5)
    {
        return (5);
    }
    if (a == 6)
    {
        return (6);
    }
    if (a == 7)
    {
        return (3);
    }
    if (a == 8)
    {
        return (7);
    }
    if (a == 9)
    {
        return (6);
    }
}

int main()
{
    int n;
    printf("Digite qual numero sera exibido no LED:");
    scanf("%d", &n);
    int total_leds = totalLEDS(n);
    printf("O total de LEDs necessários para exibir o número %d é: %d\n", n, total_leds);
    return 0;
}
