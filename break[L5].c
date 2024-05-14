#include <stdio.h>

int main(void)
{
    int N, i, par = 0, impar = 0, mediaP, mediaI;
    printf("Digite um valor N:\n");
    scanf("%d", &N);

    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                par += i;
            }
            else
            {
                impar += i;
            }
        }

        int contadorP = N / 2;         // Números pares de 1 a N
        int contadorI = N - contadorP; // Números ímpares de 1 a N

        // Calcular média dos números pares e ímpares
        if (contadorP > 0)
        {
            mediaP = par / contadorP;
        }
        else
        {
            mediaP = 0;
        }

        if (contadorI > 0)
        {
            mediaI = impar / contadorI;
        }
        else
        {
            mediaI = 0;
        }

        printf("Media par: %d. Media impar: %d\n", mediaP, mediaI);
    }
    else
    {
        printf("N deve ser um valor positivo.\n");
    }

    return 0;
}