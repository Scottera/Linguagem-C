#include <stdio.h>

int main (){
    int num[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Informe o valor da posição %d: ", i);
        scanf("%d", &num[i]);

    }

    for (i = 0; i < 5; i++){
        printf("O valor informado na posição %d foi %d \n", i, num[i]);

    }

    return 0;
}