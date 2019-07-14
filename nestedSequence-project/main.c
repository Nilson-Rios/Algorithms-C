#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  printf("Type 3 numbers:");
  scanf(" %d %d %d  ", &a, &b, &c);  //numbers shown in sequence

  if(a > b) {
    if(a > c){
     printf("Number %d was the highest entered value", a);
    } else {
     printf("Number %d was the highest entered value", c);
    }
  } else {
    if (b > c) {
     printf("Number %d was the highest entered value", b);
  } else {
     printf("Number %d was the highest entered value", c);
  }
 }
 return 0;
}
