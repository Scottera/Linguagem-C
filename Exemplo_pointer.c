#include <stdio.h>

int main() {

    char letra;
    letra = 'a';

    char palavra[8] = "sistemas";

    printf("%c \n" , letra);
    printf("%s \n", palavra);

    //ponteiro
    char *nome = "Lucas Scotti";
    printf("%s \n", nome);

    char frase[100];
    printf("Informe uma frase legal: ");
    fgets(frase, 100, stdin); // 3 parâmetros - stdin é entrada padrão do sistema operacional

    printf("Sua frase foi %s \n", frase);



    return 0;
}