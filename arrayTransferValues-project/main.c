#include <stdio.h>
#include <stdlib.h>

int main()
{
    //transfer values to another array in the inverse order
  int x[] = {11,22,33,44,55,66,77,88,99};
  int y[9];
  int ix;
  int iy;

  for (ix = 8; ix>=0; ix--){
    y[iy] = x[ix];
    iy++; // or iy = y+1;
  }
  for(iy=0; iy<9; iy++){
    printf("%d\n ", y[iy]);
  }
}
