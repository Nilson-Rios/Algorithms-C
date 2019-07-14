#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[15];
  float sal;

  printf("Type your name:");
  scanf(" %s", &name);

  printf("Typer your salary:");
  scanf("%f", &sal);

  if(sal <= 1500) {
    sal = sal + (sal * 0.12);
  } else {
    sal = sal + (sal * 0.10);
  }
    printf ("Your new salary is: %.2f", sal);
    return 0;
}

