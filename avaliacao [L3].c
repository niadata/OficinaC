#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, maior1, maior2, media;

    printf("digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota\n");
    scanf("%f", &nota2);

    printf("digite a terceira nota\n");
    scanf("%f", &nota3);

    if (nota1 > nota2)
    {
        maior1 = nota1;
        maior2 = nota2;
    }
    else
    {
        maior1 = nota2;
        maior2 = nota1;
    }

    if (nota3 > maior1)
    {
        maior2 = maior1;
        maior1 = nota3;
    }
    if (nota3 > maior2)
    {
        maior2 = nota3;
    }

    media = (maior1 + maior2) / 2;

    printf("a media das duas maiores notas eh: %.2f", media);
}