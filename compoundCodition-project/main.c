#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;

  printf("Typer your age: ");
  scanf("%d", &age);

  if (age>=18) {
  printf("You're over 18!\n");
} else {
  printf("You're under 18!\n");
  }
  return 0;
}
