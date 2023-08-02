#include <stdio.h>

int main (){
    int entrada[10];                //Gerar uma lista de 10 números
    int pares[5];
    int impares [5];

    int i;
    int x = 0;                      //Contar pares
    int y = 0;                      //Contas ímpares

    for (i = 0; i < 10; i++) {
        printf("Informe o valor na posição %d: ", i);
        scanf("%d", &entrada[i]);

        if (i % 2 == 0) {
            pares[x] = entrada[i];
            x++;

        } else {
            impares[y] = entrada[i];
            y++;
        }

    }
    printf("Valores nas posições pares: \n");
    for (i = 0; i < 5; i++) {
        printf("%d \n", pares[i]);
    }

    printf("Valores nas posições ípares: \n");
    for (i = 0; i < 5; i++) {
        printf("%d \n", impares[i]);
    }

        return 0;
    }