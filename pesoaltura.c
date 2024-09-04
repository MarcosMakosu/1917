#include <stdlib.h>
#include <stdio.h>

// tipo estrutura inteiro
typedef struct pesoaltura{
    int peso; // peso em quilogramas
    int altura; // altura em centimentros
} pesoaltura;

// definição de estrutura


int main(){
    pesoaltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 180;
    printf("Peso: %i\nAltura: %i\n", pessoa.peso, pessoa.altura);
    
    if (pessoa.altura > 110) {
        printf("Pode se divertir\n");
    } else {
        printf("Vá embora!\n");
    }
    
     printf("%i\n", (int) sizeof(pesoaltura));

    return 0;   
}

int main () {
    pesoaltura *pessoa; // ponteiro para pesoaltura
    pessoa = (pesoaltura *) malloc(sizeof(pesoaltura))

    return 0;
}