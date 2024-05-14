/* Algoritmo: resolver a equação de primeiro grau ax+b=0
Entrada: coeficientes reais a e b da equação ax + b = 0
Saída: resultado da equação (valor de x)
Defesa: coef. angular não-nulo (i.e. devemos impedir a == 0).*/

/* INÍCIO
1- Obtenha os coeficientes da equação;
2- Verifique se o valor do coeficiente ‘a’ é inválido. Caso
seja, exiba uma mensagem e termine o programa;
3- Calcule o valor de x;
4- Exiba o valor de x na tela.
FIM */

float a, b, x;

int main()
{
    printf("Digite o valor de A e B: \n");
    scanf("%f %f", a, b);

    if (a == 0)
    {
        printf("A vale zero logo a divisão é impossível");
    }

    else
    {
        x = -b/a;
        printf("O valor se X é:%f\n", x);
    }
}
