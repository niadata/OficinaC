#include <stdio.h>
#include <math.h>

// Assinatura da função ‘dist’:
float dist(float x1, float y1, float x2, float y2);
int main()
{
    float x, y, a, b;
    scanf("%f %f %f %f", &x, &y, &a, &b);
    // Chamada da função ‘dist’:
    printf("Distancia = %0.2f\n", dist(x, y, a, b));
    return 0;
}

// Implementação da função ‘dist’:
float dist(float x1, float y1, float x2, float y2)
{
    float dx, dy, distancia;
    dx = x2 - x1;
    dy = y2 - y1;
    distancia = sqrt(dx * dx + dy * dy);
    return distancia;
}