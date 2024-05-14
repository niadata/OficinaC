/*
Descrição: dados três números inteiros, retorna o maior
Entrada: os três números inteiros
Saída: o maior número encontrado
Defesa: Só aceita valores inteiros de 0 a 10
*/
#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, maior; 
    printf("Digite tres valores entre 0 e 10: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3); 
    if (numero1 > numero2 &&numero1 > numero3)
    {
        maior = numero1;
    }

    if (numero2> numero1 &&numero2 > numero3)
    {
        maior = numero2;
    }

    else
    {
        maior = numero3;
    }
    printf("O maior numero eh: %d \n", maior);
}