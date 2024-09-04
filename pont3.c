#include <stdio.h>
#include <malloc.h>

int main() {
    int* y; //ponteiro do tipo inteiro (*)
    int tamanhoDeinteiro = sizeof(int); //4b
    printf("tamanho de inteiro: %i", tamanhoDeinteiro);
    printf("\n");
    y = (int *) malloc(tamanhoDeinteiro); // malloc retorna (void *)

    // y = (int*) malloc(sizeof(int)); // sizeof(int) --> 4
    // *y = 20;
    // int z = sizeof(int);
    // printf("*y=%i z=%i\n", *y, z)
    // return 0;
}