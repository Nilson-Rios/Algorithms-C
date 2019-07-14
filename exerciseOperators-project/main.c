#include <stdio.h>
#include <stdlib.h>

int main()
{
  float sal;

  printf("Enter your salary:");
  scanf("%f", &sal);

  if (sal <= 1000 ) {
  sal = (sal * 1.15);
   } else {
    if ((sal > 1000 ) && (sal <= 1500)){
    sal = (sal * 1.10);
    } else {
      sal = (sal * 1.08);
    }
   }

    printf ("Your new salary: %.2f", sal);
}
