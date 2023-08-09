#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char *nome;
    float nota;
};


int main() {

    struct aluno a;
    a.nome = malloc(50);

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", a.nome);

    printf("Informe a nota deste aluno: ");
    scanf("%f", &a.nota);

    if (a.nota >= 7){
        printf("O aluno está aprovado.");
    } else {
        printf("O aluno está reprovado.");
    }


    return 0;
}

