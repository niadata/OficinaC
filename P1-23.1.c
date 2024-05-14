// QUESTÃO 1
#include <stdio.h>
int main()
{
    int a, b;
    puts("Digite 2 inteiros nao negativos e de mesma qtd de digitos:");
    scanf("%d %d", &a, &b);
    // Defesa
    if (a < 0 || b < 0 || numDig(a) != numDig(b))
    {
        puts("Entrada invalida.");
    }
    else
    {
        printf("Numero de bits diferentes: %d", hamming(a, b));
    }
    return 0;
} // não entendi as funções solicitadas

// QUESTÃO 2
#include <stdio.h>
void impar(int x, int y); // Assinatura

int main()
{
    int x, y, maior, menor;

    printf("Digite dois numeros inteiros e positivos:");
    scanf("%d %d", &x, &y);

    if (x < 0 || y < 0)
    {
        printf("Numeros invalidos");
        return 0;
    }
    if (x < y)
        impar(x, y);
    else
        impar(y, x);
}

void impar(int x, int y)
{
    int prox, i;

    for (i = x; i <= y; i++)
    {
        if (x % 2 != 0)
        {
            printf("%d", i);
        }
    }

} // NÃO PRINTA NADA

// QUESTÃO 3
#include <stdio.h>

int main()
{
    float a, b, c;
    puts("digite 3 valores");
    scanf("%f %f %f", &a, &b, &c);
    clima(a, b, c);
    return 0;
}

void clima(float a, float b, float c)
{
    float maior, menor, media, diferenca;
    if (a > b && a > c)
    {
        maior = a;
        menor = b + c;
    }
    if (b > c && b > a)
    {
        maior = b;
        menor = a + c;
    }
    else
    {
        maior = c;
        menor = b + a;
    }

    media = menor / 2;
    diferenca = maior - media;

    if (diferenca <= 10 && media > 25)
    {
        printf("Temperatura Equatorial\n");
    }
    if (diferenca <= 10 && media < -10)
    {
        printf("Temperatura Polar\n");
    }
    if (diferenca <= 40 && media > 25)
    {
        printf("Temperatura Polar\n");
    }
    else
    {
        printf("Temperatura Continental\n");
    }
}

// QUESTÃO 4
#include <stdlib.h>

int main()
{
    int a1, a2, m1, m2, d1, d2;

    printf("Digite a primeira data (aaaa/mm/dd): ");
    scanf("%d/%d/%d\n", &a1, &m1, &d1);

    printf("Digite a segunda data (aaaa/mm/dd): ");
    scanf("%d/%d/%d\n", &a2, &m2, &d2);

    if (0 < a1 || a1 > 100 || 0 < a2 || a2 > 100)
    {
        printf("Ano datado invalido");
        return 0;
    }

    if (0 < m1 || m1 > 11 || 0 < m2 || m2 > 11)
    {
        printf("Mes datado invalido");
        return 0;
    }

    if (0 < d1 || d1 > 29 || 0 < d2 || d2 > 29)
    {
        printf("dia datado invalido");
        return 0;
    }
} // NÃO ENTENDI A CONTA

// QUESTÃO 5
// Não entendi a resposta envolvendo a A