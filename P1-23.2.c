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
// Essa questão se trata de truncagem. Logo ele abstraí o valor após a vígula, as funções solicitadas são do ensino médio vale revisar.

int piso(float x) {
    int x_truncado = x;
    return (x < 0 && x != x_truncado) ? x - 1 : x;
}
int teto(float x) {
    int x_truncado = x;
    return (x > 0 && x != x_truncado) ? x + 1 : x;
}
int relacao(float a, float b) {
    return (piso(a) + piso(b)) / 2.0 == piso((a + b) / 2.0);
}

// # QUESTÃO 3
#include <stdlib.h>

int main()
{
    int i, s, soma=0;
    printf("Enter a number: ");
    scanf("%d", &s);

    if (s > 0)
    {
        for (i = 1; i <= s; i++)
        {
            while (s%i == 0)
            {
                soma +=i;
                if (soma == s){
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
