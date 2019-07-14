#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Make an algorithm that fills a 2x5 matrix with integers and at the end fill a vector x [5] with the sum of each of the columns of the matrix.
  int m[2][5];
  int x[5];
  int i, j;

  for(i=0; i<2; i++){
    for (j=0; j<5; j++){
      printf("Type a number: ");
       scanf("%d", &m[i][j]);
    }
  }
  for(i=0; i<5; i++){
    x[i] = m[0][i] + m[1][i];
  }
    printf("The sum of the columns of the matrix are: \n");
    for (i=0; i<5; i++){
        printf("%d ", x[i]);
    }
    return 0;
}
