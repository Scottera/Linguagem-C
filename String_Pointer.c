#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *nome;

    nome = malloc(50);

    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);

    //tirando a quebra de linha
    int ultimoChar = strlen(nome);
    nome[ultimoChar - 1] = '\0';

    printf("Seu nome é %s", nome);

    return 0;
}
