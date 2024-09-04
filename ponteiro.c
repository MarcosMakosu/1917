#include <stdio.h>
int main() { 

    int i = 5;
    // amarzenando valor na "var"
    int *j;
    // definido um var do tipo ponteiro para inteiro
    i = i + 1;
    // ponteiro j recebe o endereço(&) de j

    
printf("i: %p\n", &i);
printf("J: %p\n", j);

    return 0;
}