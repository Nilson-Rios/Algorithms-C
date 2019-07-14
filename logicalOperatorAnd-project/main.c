#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b, c;

  printf("Type 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  if ((a > b) && (a > c)){
    printf("The highest value was %d", a);
  } else {
    if ((b > c) && (b > c)){
      printf("The highest value was %d", b);
    } else {
      printf("The highest value was %d", c);
    }
  }
}
