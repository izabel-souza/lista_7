#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define X 80

void frase_sem_espaco(char *string, char *string_sem_espaco);
void codificar_string(char *string_sem_espaco);

int main (void) {

    char string[X];
    printf("Informe uma frase: ");
    scanf(" %79[^\n]%c", string);

    char *string_sem_espaco;
    frase_sem_espaco(string, string_sem_espaco);
    codificar_string(string_sem_espaco);

    return 0;
}

void frase_sem_espaco(char *string, char *string_sem_espaco) {

    int j = 0;
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] != ' ') {
            string_sem_espaco[j] = string[i];
            j++;
        }
    }
}

void codificar_string(char *string_sem_espaco) {

    int bloco = 1;
    char caractere_atual;
    char nova_string[X];

    for(int i = 0; i < strlen(string_sem_espaco); i++) {
        if(bloco > 5) {
            bloco = 1;
        }
        else {
            caractere_atual = string_sem_espaco[i];
            nova_string[i] = caractere_atual + bloco;
            bloco++;
        }
    }
    printf("%s", nova_string);
}