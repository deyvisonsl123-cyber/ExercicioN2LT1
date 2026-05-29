#include <stdio.h>

void inverterString(char *str) {
    char *inicio = str;
    char *fim = str;
    char temp;

    while(*fim != '\0') {
        fim++;
    }

    fim--;

    while(inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma String: ");
    fgets(texto, 100, stdin);

    char *p = texto;
    while(*p != '\0') {
        if(*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    inverterString(texto);

    printf("String inversa: %s\n", texto);

    return 0;
}
