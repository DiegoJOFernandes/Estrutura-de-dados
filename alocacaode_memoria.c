# include <stdio.h>

int main(){
    int x = 25; // A variável x é iniciada com valor 25
    int* y = &x; // A variável y recebe o endereço onde a variável x esta alocada
    *y = 30;
    int a = sizeof(int);
    printf("%i %i %i", *y, &x, a);
    return 0;
}