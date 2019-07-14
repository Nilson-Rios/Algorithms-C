#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;

  printf("Type a number: ");
  scanf("%d", &x);
  x++;                                      //INCREMENTO = X++
  printf("The final number is: %d", x);
  return 0;
}
