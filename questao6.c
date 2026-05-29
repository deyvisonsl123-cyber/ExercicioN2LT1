#include <stdio.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
    *vogais = 0;
    *consoantes = 0;

    while(*str != '\0'){
        if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')){
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U'){
                (*vogais)++;
            }
            else{
                (*consoantes)++;
            }
        }
        str++;
    }
}

int main(){
    char texto[100];
    int vogais, consoantes;

    printf("Digite uma String: ");
    fgets(texto, 100, stdin);

    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
