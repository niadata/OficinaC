#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float r1, r2, area, R1, R2;

int main()
{
    printf("Digite os vaolores de R1:");
    scanf("%f", r1);

    printf("Digite os vaolores de R2:");
    scanf("%f", r2);

    R1 = pow(r1, 2);
    R2 = pow(r2, 2);
    area = 3.14 * (R1 - R2);
    printf("A area eh de:%f\n", area);
}