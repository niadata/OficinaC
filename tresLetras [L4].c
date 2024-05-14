#include <ctype.h>
#include <stdio.h>

int main()
{
    char letra;
    int i = 0;

    printf("Digite uma letra: ");
    letra = getchar();

    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')))
    {
        printf("Caractere digitado nao e uma letra do alfabeto.\n");
    }
    else
    {
        printf("%c\n", letra);
        while (i <= 3)
        {
            printf("Digite mais uma letra : "); // esta printando duas vezes
            letra = getchar();
            printf("Aletra selecionada foi %c\n", letra);
            i++;
        }
    }

    return 0;
}
