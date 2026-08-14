#include <stdio.h>

int somaMatriz(int matriz[][3], int n)
{
    int soma = 0; // o(1)

    for (int i = 0; i < n; i++)
    { // int i = o(1); n = 3; o(n); o(n)
        for (int j = 0; j < n; j++)
        {                         // int j = o(1); n = 3; o(n); o(n)
            soma += matriz[i][j]; // o(1)
        }
    }

    return soma; // o(1)
}

int main(void)
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int resultado = somaMatriz(matriz, 3); // o(n); 4n**2 + 6n + 4 = 4n**2 + 6n + 5

    printf("Soma = %d\n", resultado); // o(1)

    return 0; // o(1)
}