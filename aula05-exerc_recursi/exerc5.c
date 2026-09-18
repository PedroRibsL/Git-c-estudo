#include <stdio.h>

int maiorElemento(int v[], int n)
{
    // Caso base
    if (n == 1)
        return v[0];

    // Caso recursivo
    int anterior = maiorElemento(v, n - 1);

    if (v[n - 1] > anterior) v[n - 1]; 
    printf("anterior --> %d | v[n - 1] --> %d\n", anterior, return anterior;
}

int main()
{
    int v[] = {10, 20, 30, 40, 50};
    int n = sizeof(v) / sizeof(v[0]);

    printf("%d\n", maiorElemento(v, n));

    return 0;
}