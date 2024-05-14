
int main(void)
{
    float x, y, media;
    printf("Digite um inteiros:\n");
    scanf("%f %f", &x, &y);
    media = (x + y) / 2;
    if (media > 5)
    {
        printf("Aprovado com nota %2f", media);
    }
    else
    {
        printf("Reprovado com nota %2f", media);
    };
    return 0;
}

// porque no podemos usar operador ternario com char?
