#include <stdio.h>
#include <stdlib.h>

int main()
{
float a, b;

  printf("Type a number: ");
  scanf("%f", &a);

  printf("Type another number: ");
  scanf("%f", &b);

  if(a > b){
  printf("The greater number is %.2f\n", a);
  } else {
  printf("The greater number is %.2f\n", b);
  }
  return 0;
}
