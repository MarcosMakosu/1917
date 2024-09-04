#include <stdio.h>
int main() {
    int x = 25;  // armarzenando 25
    int* y = &x; // defino y no endereço de x
    *y = 30;     // alterando o valor de x pelo y
    printf("y (end. de x): %p", y);
    printf("\n");
    printf("*y: %i, *y");
    printf("\n")
    return 0;
}