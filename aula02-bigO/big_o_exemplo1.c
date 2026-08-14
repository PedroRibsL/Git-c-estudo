#include <stdio.h>

int maiorElemento(int v[], int n) {
    int maior = v[0]; // o(1)

    for (int i = 1; i < n; i++) { //int i = o(1); n = 7 elementos; o(n-1); g(n) = 3n - 1
        if (v[i] > maior) {
            maior = v[i]; //o(1)
        }
    }

    return maior; //o(1)
}

int main(void) {
    int vetor[] = {10, 25, 8, 40, 32, 70, 15}; //n = 7 elementos; 6(n-1)(começa do i = 1, 25); o(7)
    int n = sizeof(vetor) / sizeof(vetor[0]);//o(1)

    int maior = maiorElemento(vetor, n);//o(1) + o(3n + 2)

    printf("Maior elemento: %d\n", maior);//o(1)

    return 0;//o(1)
}