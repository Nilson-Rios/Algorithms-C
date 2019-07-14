#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Print numbers over 25
  int i;
  int qtdmaior = 0;
  int v[10];

  for (i=0; i<10; i++){
    printf("Insert the %d# number: ", i+1);
    scanf("%d", &v[i]);
}
  for(i=0; i<10; i++){
    if (v[i]>25){
     qtdmaior = qtdmaior +1;
    }
  }
  printf(" %d numbers over 25 were entered", qtdmaior);
}
