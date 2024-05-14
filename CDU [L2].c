#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero, centena, dezena, unidade, dez;

    printf("Digite o numero\n");
    scanf("%d", &numero);
    centena = numero % 100;

    if (centena != 0)
    {
        centena = (numero / 100);
        dezena = (numero / 10) - (centena * 10);
        unidade = numero - (centena * 100) - (dezena * 10);

        if (pow(centena, 3) + pow(dezena, 3) + pow(unidade, 3) == numero)
        {
            printf("O numero %d é um numero de armstrong", numero);
        }
    }

    else
    {
        printf("Numero invalido. por favor digite um valor com tres digitos");
    }
}