#include <stdio.h>
#include <stdlib.h>

int main()
{
    //even numbers between 0 and 50
  int i;
  i = 1;

  while ( i <= 50){
    if((i%2)==0){
      printf("%d\n", i);
    }
    i = i+1;
  }
}
