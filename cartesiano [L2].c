#include <stdio.h>

int main(void)
{
    float x, y;

    printf("Digite o valor de X \n");
    scanf("%f", &x);

    printf("Digite o valor de Y \n");
    scanf("%f", &y);

    if (x > 0 && y > 0)
    {
        printf("O ponto está no primeiro quadrante");
    }
    if (x < 0 && y > 0)
    {
        printf("O ponto está no segundo quadrante");
    }
    if (x < 0 && y < 0)
    {
        printf("O ponto está no terceiro quadrante");
    }
    if (x > 0 && y < 0)
    {
        printf("O ponto está no quarto quadrante");
    }
    else
    {
        printf("O ponto está na origem");
    }
}