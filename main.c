#include <stdio.h>
#include <string.h>

#define MAX 50

char tarefas[MAX][100];
int total = 0;

void adicionarTarefa(char nome[]) {
    strcpy(tarefas[total], nome);
    total++;
}

int main() {
    adicionarTarefa("Estudar C");
    adicionarTarefa("Revisar Git");
    printf("Total de tarefas: %d\n", total);
    return 0;
}