#include <stdio.h>

int main(void)
{
    int N, i, par = 0, impar = 0, contadorNegativo = 0, numerosValidos = 0;
    float mediaP, mediaI;

    for (numerosValidos = 0; numerosValidos < 3;)
    {
        printf("Digite um valor N:\n");
        scanf("%d", &N);

        // Verificar se N é negativo
        if (N < 0)
        {
            contadorNegativo++;
            // Se ocorrer 3 números negativos, interrompa o loop
            if (contadorNegativo == 3)
            {
                break;
            }
            printf("Aviso: Números negativos não são permitidos.\n");
            continue; // Avança para a próxima iteração
        }

        // Contabilizar apenas números positivos
        numerosValidos++;

        // Atualizar a soma de números pares e ímpares
        if (N % 2 == 0)
        {
            par += N;
        }
        else
        {
            impar += N;
        }
    }

    // Calcular médias, verificando se houve pelo menos 1 número par ou ímpar
    if (numerosValidos > 0)
    {
        mediaP = (par > 0) ? (float)par / numerosValidos : 0;
        mediaI = (impar > 0) ? (float)impar / numerosValidos : 0;
        printf("Média de números pares: %.2f\n", mediaP);
        printf("Média de números ímpares: %.2f\n", mediaI);
    }
    else
    {
        printf("Nenhum número válido foi inserido.\n");
    }

    return 0;
}
