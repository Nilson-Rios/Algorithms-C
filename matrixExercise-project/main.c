#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Fill a 4x3 matrix and show the higher value entered

  int m[4][3];
  int l, c;
  int i =1;
  int maior = -9999;

  for(l=0 ; l<4; l++){
    for(c=0; c<3; c++){
     printf("Type the %d# number:", i++);
      scanf("%d", &m[l][c]);
  }
   }
    for(l=0 ; l<4; l++){
     for(c=0; c<3; c++){
       if(m[l][c] > maior){
      maior = m[l][c];
    }
     }
      }
    printf("The highest stored value is: %d\n", maior);
}
