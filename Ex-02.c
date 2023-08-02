#include <stdio.h>

int main() {
    float saldo;
    float lancamentos[10];
    int i;

    printf("Informe o saldo atual de sua conta bancária: ");
    scanf("%f", &saldo);

    for(i = 0; i < 10; i++){
        printf("Informe o lançamento de número %d: ", i+1);
        scanf("%f", &lancamentos[i]);
        saldo += lancamentos[i];

    }

    printf("O saldo final é R$ %.2f", saldo);



    return 0;
}
