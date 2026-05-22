#include <stdio.h>

void dobrar(int *numero){
    *numero = (*numero) * 2;
}

int main(){
    int valor;

    printf("Digite o número: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}
