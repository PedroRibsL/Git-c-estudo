// Desafio: Sequência de Fibonacci
// Implemente uma função recursiva em C que receba um número n e retorne o n-ésimo termo da sequência de
// Fibonacci.
// Caso Base: Se n <= 1, retorne o próprio n.
// Caso Recursivo: Retorne a soma de fib(n-1) +
// fib(n-2).
// Teste sua função no main() com valores pequenos (ex:
// 5, 10).
// Reflexão: O que acontece se você tentar calcular
// fib(50)?
// DICA: Desenhe a árvore de chamadas para fib(4) e veja quantas vezes a mesma conta é repetida!

#include<stdio.h>

long long fibonacci(int n){
    // condição base
    if (n <=1) return n;
    
    // condição recursiva
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    // declaração de variaveis
    int n;
    
    printf("Digite um numero para saber o resultado de fibonacci: ");
    scanf("%d", &n);
    
    printf("O resultado de fibonacci para o numero %d: %lld\n", n, fibonacci(n));
    
    return 0;
}
