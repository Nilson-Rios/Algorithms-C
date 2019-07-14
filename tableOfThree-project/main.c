#include <stdio.h>
#include <stdlib.h>

int main()
{
  int resultado, i;
  for(i=1; i <= 10; i++){
    resultado = 3 * i;
    printf("3 x %d = %d\n", i, resultado);
  }
}
