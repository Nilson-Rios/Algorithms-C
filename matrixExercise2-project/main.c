#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Make an algorithm that fills a 3x3 matrix with integers and at the end show the numbers that are on the main diagonal, in addition to the sum of them.

  int m[3][3];
  int l, c;
  int i =1;
  int soma = 0;

  for(l=0 ; l<3; l++){
    for(c=0; c<3; c++){
     printf("Type the %d# number:", i++);
      scanf("%d", &m[l][c]);
    }
  }
   printf("The elements in the main diagonal are: \n");
    for(l=0 ; l<3; l++){
     for(c=0; c<3; c++){
      if(l==c){
        printf("%d\n", m[l][c]);
          soma = soma + m[l][c];
        }
      }
    }
    printf("The sum of the elements at the main diagonal is: %d\n", soma);
}
