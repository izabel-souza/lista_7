#include <stdio.h> <stdlib.h> <string.h>
#define X 10

void atribuicao(int *vetor);
void impressao(int *vetor);

int main (void) {

    int vetor[X];
    atribuicao(vetor);
    impressao(vetor);

    return 0;
}

void atribuicao(int *vetor) {
    for(int i = 0; i < X; i++) {
            vetor[i] = 5*(i+1);
        }
}

void impressao(int *vetor) {
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}