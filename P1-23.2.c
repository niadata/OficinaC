// # QUESTÃO 1
#include <stdlib.h>

int main()
{
    int i, la, lp, lu, pp, pu, pa, a, u, p;
    printf("Enter a number l: \n");
    scanf("%d %d %d", &la, &lp, &lu);

    printf("Enter a number P: \n");
    scanf("%d %d %d", &pp, &pu, &pa);

    a = la * pa;
    p = lp * pp;
    u = lu * pu;

    if (pa < 1 || pp <= pa || pu <= pp)
    {
        printf("Pesos invalidos.");
        return -1;
    } // CUIDADO PRA NÃO ESQUECER DE ESCREVER OS VALORES MINIMOS NECESSARIOS PAR FUNÇÃO RODAR

    else if (u > a && u > p && lu > 0)
    {

        printf("Seguro");
    }
    else if (p > a && p > u && lp > 0)
    {

        printf("modrado");
    }
    else if (a > p && a > u && la > 0)
    {

        printf("falir");
    }

    else
    {
        printf("Arriscado");
    }
    return 0;
}

// # QUESTÃO 2
// NÃO ENTENDI

// # QUESTÃO 3
#include <stdlib.h>

int main()
{
    int i, s;
    printf("Enter a number: ");
    scanf("%d", &s);

    if (s > 0)
    {

        for (i = 1; i <= s; i++)
        {

            while (i % 2 == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }

    else
    {
        printf("Valor invalido");
    }
    return 0;
}

// # QUESTÃO 4
