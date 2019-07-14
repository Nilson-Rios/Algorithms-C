#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[10];
    int i;
    float resultado;

    for (i = 0; i < 10; i++){
    printf("Inesert the %i# number: ", i+1);
    scanf("%f", &x[i]);
    }

    for(i=0; i<10; i++){
    resultado = x[i] *3;
    printf("The tripple of %.2f is %.2f\n", x[i], resultado);
    }
}
