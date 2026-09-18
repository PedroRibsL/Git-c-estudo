#include <stdio.h>

void contagem(int n){
    // Caso base
    if (n == 0){
        printf("FIM!");
        return;
    }
    // Caso recursivo
    printf("%d\n", n);
    contagem(n - 1);
    printf("%d\n", n);
}

int main(){

    contagem(2);

    return 0;
}