#include <stdio.h> <stdlib.h> <string.h>
#define X 26

void atribuicao(char *vetor);
void impressao(char *vetor);

int main (void) {

    char vetor[X];
    atribuicao(vetor);
    impressao(vetor);
    return 0;
}

void atribuicao(char *vetor) {
    printf("Informe uma string: ");
    scanf(" %25[^\n]%c", vetor);
}

void impressao(char *vetor) {
    for(int i = 0; i < strlen(vetor); i++) {
        if(vetor[i] >= 65 && vetor[i] <= 90) {
            printf("%c", vetor[i]+32);
        }
        else{
            printf("%c", vetor[i]);
        }
    }
}