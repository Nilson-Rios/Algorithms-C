#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
  printf("Type your age: ");
  scanf("%d", &age);

  if (!((age > 18) || (age < 18))){
    printf ("You're 18!\n");
  } else {
    printf("You're not 18!\n");
  }
}
