#include <stdio.h>

int somatorio(int n)
{
    // Caso base
    if (n == 0) return 0;
    // Caso recursivo
    return n + somatorio(n - 1);

}

int main()
{
    printf("%d\n", somatorio(5));
    return 0;
}