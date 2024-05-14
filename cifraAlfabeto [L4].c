#include <ctype.h>
#include <stdio.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')))
    {
        printf("Caractere invalido");
        return 0;
    }
    else
    {
        letra = tolower(letra);
        int posicao = letra - 'a' + 12;
        char letra = 'a' + posicao;
        printf("A letra '%c' esta na posicao %d do alfabeto.\n", letra, posicao);
    }

    return 0;
}
