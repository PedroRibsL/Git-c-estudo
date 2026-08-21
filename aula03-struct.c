#include <stdio.h>
#include <string.h>

// typedef (unsigned int) (uint)
// typedef unsigned int uint // semelhante ao python --> import numpy as numpy

struct Aluno{
    int rm; // unsigned int rm;
    char nome[50];
    float nota[3];
    // email, data de nascimento, turma...
};


int main()
{
    struct Aluno aluno[3];
    aluno[0].rm = 0;
    strcpy(aluno[0].nome, "João Silva"); 
    printf("Nome Completo: %s\n",aluno[0].nome);
    aluno[0].nota[0] = 8; // aluno[0].nota = {8, 10 , 0}
    aluno[0].nota[1] = 10;
    // sizeof: ele pega o tamanho em bytes do elemento ou tipo de dado
    // int -> 4bytes
    // char -> 1byte
    // 2 valores no vetor nora, então 2 * 4 bytes = 8 bytes
    printf("%d\n", sizeof(aluno[0].nota)/sizeof(aluno[0].nota[0]));
    
    int tamanho_vetor = sizeof(aluno[0].nota)/sizeof(aluno[0].nota[0]);
    
    float media = (aluno[0].nota[0] + aluno[0].nota[1])/tamanho_vetor;
    
    printf("A nota do aluno(a): %f\n", media);
    

    return 0;
}
