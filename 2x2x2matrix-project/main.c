#include <stdio.h>
#include <stdlib.h>

int main()
{
 int m[2][2][2];
 int l, c, p;

 for(l=0 ; l<2; l++){
  for(c=0; c<2; c++){
   for(p=0; p<2; p++){
     printf("Type a number: ");
      scanf("%d", &m[l][c][p]);
 }
  }
   }
  for(l=0 ; l<2; l++){
   for(c=0; c<2; c++){
     for(p=0; p<2; p++){
     printf(">>>[%d][%d][%d] -> %d\n", l, c, p, m[l][c][p]); //line, column and page.
   }
  }
 }
}
