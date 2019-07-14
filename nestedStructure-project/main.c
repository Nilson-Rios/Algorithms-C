#include <stdio.h>
#include <stdlib.h>

int main()
{

 int a, b, c;

  printf("Type 3 numbers:");
  scanf(" %d", &a);
  scanf(" %d", &b);
  scanf(" %d", &c);

  if(a > b) {
    if(a > c){
     printf("%d is the highest number", a);
    } else {
     printf("%d is the highest number", c);
    }
  } else {
    if (b > c) {
     printf("%d is the highest number", b);
  } else {
     printf("%d is the highest number", c);
  }
 }
 return 0;

}
