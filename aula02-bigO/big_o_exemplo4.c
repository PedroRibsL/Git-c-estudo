#include <stdio.h>

void mostrarDobros(int n) {

    for (int i = 1; i < n; i *= 2) { // o(1); o(n-1); 
        printf("%d\n", i);
    }
}

int main(void) {

    mostrarDobros(32); // o(32)

    return 0;
}