/*
Autor: <Niara Gomes>
Data: <10/04/2024>
Descrição: <recebe as três notas (avaliações de provas) e retorne a média
aritmética entre as duas maiores.>
Entrada: <3 valores float>
Saída: <o que o programa retorna para o usuário>
Defesa: possíveis restrições de entrada
*/
#include <stdio.h>

float nota1, nota2, nota3, media, somatorio;
media =0;
somatorio = 0;
notas [3];

int main() {
    printf("Digite a primeira nota:");
    scanf("%f", nota1);

    printf("Digite a segunda nota:");
    scanf("%f", nota2);

    printf("Digite a terceira nota:");
    scanf("%f", nota3);

    notas [nota1, nota2, nota3];


    if (nota1+nota2 > nota1+nota3 ){
        somatorio = nota1+nota2;
        return media =+ somatorio;
    }
    
    else{
        somatorio = nota1+nota3;
        return media =+ somatorio;
    }
return 0;
}