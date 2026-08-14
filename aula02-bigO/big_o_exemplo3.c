#include <stdio.h>

void imprimirTriangulo(int n){ // n = 5;
    for (int i = 0; i < n; i++){ //
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

int main(void)
{
    imprimirTriangulo(5); // somar5; no final entao fica g(n) = 4n**2 + 2n + 10
    return 0;
}