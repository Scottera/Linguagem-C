#include <stdio.h>

int main() {

    int x = 5;
    int *y;

    y = &x;

    printf("%d \n", x);
    printf("%d \n", *y);

    *y = 10;

    printf("%d \n", x);
    printf("%d \n", *y);

        
    return 0;
}
