#include <stdio.h>
#include <stdlib.h>

int main()
{
 //Fill a 2X3 matrix with integer numbers and print the values
int m[2][3];
 int l, c;

 for(l=0 ; l<2; l++){
 for(c=0; c<3; c++){
  printf("Type a number: ");
   scanf("%d", &m[l][c]);
 }
 }
  for(l=0 ; l<2; l++){
   for(c=0; c<3; c++){
    printf(">>>[%d][%d] -> %d\n", l, c, m[l][c]);
   }
   }
  }
