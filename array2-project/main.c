#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, x[15];

  for(i=0; i<15; i++){
    printf("Type the %d# number:", i+1); // %d show number position
     scanf("%d", &x[i]);
  }
  printf("Os números digitados foram: ");
    for(i=0; i<15; i++){
      printf("%d ", x[i]);
  }
}
