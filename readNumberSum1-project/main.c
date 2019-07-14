#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;

  printf("Type a number: ");
  scanf("%d", &x);
  x = x + 1;
  printf("This number plus 1 is: %d", x);
  return 0;
}


