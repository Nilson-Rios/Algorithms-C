#include <stdio.h>
#include <stdlib.h>

int main()
{
  int result, nd, i;

  printf("Typer a number: ");
  scanf("%d", &nd);
  i = 1;
  do {
    result = nd * i;
    printf("%d x %d = %d\n", nd, i, result);
    i = i + 1;
  }while (i <= 10);
}
