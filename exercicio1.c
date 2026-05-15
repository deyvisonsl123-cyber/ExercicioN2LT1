#include <stdio.h>

void trocar(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    trocar(&x, &y);

    printf("\nValores trocados: \n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
