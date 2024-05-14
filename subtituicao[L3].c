#include <stdio.h>
int main()
{

    float a, b;
    int operador;

    printf("Escolha uma operação matematica:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicação\n");

    scanf("%d", &operador);

    printf("Digite os valores de a e b: ");
    scanf("%f %f", &a, &b);
    switch (operador)
    {
    case 1:
        printf("%.2f\n", a + b);
        break;
    case 2:
        printf("%.2f\n", a - b);
        break;
    case 3:
        printf("%.2f\n", a / b);
        break;
    case 4:
        printf("%.2f\n", a * b);
        break;
    default:
        printf("Operador nao definido.");
    }
    return 0;
}