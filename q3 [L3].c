#include <stdio.h>
int main()
{
    float a, b, c, d;
    int operador;
    printf("Escolha uma operação matematica:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("4 - Divisao\n");
    printf("5 - Multiplicação\n");
    printf("0 - Sair\n");

    scanf("%d", &operador);
    if (operador == 0)
    {
        printf("saindo do sistema");
    }
    else
    {
        switch (operador < 3)
        {
            printf("Digite os valores de a, b e c: ");
            scanf("%f", &a);
        case 1:
            // QUESTÃO A
            d = (a / 2 == 0) ? a * 0 + 1 : a * 0 - 1;
            printf("O valor de X eh: %d", d);
            break;

        case 2:
            // QUESTÃO B
            d = (a > 0) ? a * 0 + 1 : a * 0 + 0;
            printf("O valor de X eh: %f", d);
            break;
        }

        switch (operador > 3)
        {
            printf("Digite os valores de a, b e c: ");
            scanf("%f %f %f", &a, &b, &c);
        case 3:
            // QUESTAO C
            d = (a > b ? (a > c ? a : c) : (b > c ? b : c));
            printf("o maior numero é: %f", d);
            break;

        case 4:
            // QUESTAO D
            d = (a + b > b + c ? (a + b > c + a ? a + b : c + a) : (b + c > c + a ? b + c : c + a));
            printf("A media eh: %f", d / 2);
            break;
        case 5:
            // QUESTAO E
            d = (c >= 'a' && c <= 'z') ? 'm' : (c >= 'A' && c <= 'Z') ? 'M'
                                                                      : '?';
            printf("o maior numero é: %c", d);
            break;
        default:
            printf("opcao invalida.");
            break;
        }
    }
}
