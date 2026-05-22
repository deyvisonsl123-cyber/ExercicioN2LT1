#include <stdio.h>

void copiarString(char *origem, char *destino){
    while(*origem != '\0'){
        *destino = *origem;

        origem++;
        destino++;
    }

    *destino = '\0';
}

int main(){
    char texto1[100];
    char texto2[100];

    printf("Digite um string: ");
    fgets(texto1, 100, stdin);

    copiarString(texto1, texto2);

    printf("String copiada: %s", texto2);

    return 0;
}
