#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
  char sex;

  printf("Type your age and gender (m/f): ");
  scanf("%d %c", &age, &sex);

      if (((age >= 18) && (sex == 'M')) || (sex == 'm')){
      printf("Qualified for developer!\n");
    }
      if (((age >= 25) && (sex == 'F')) || (sex == 'f')){
      printf("Qualified for test analyst!\n");
    }
      if (age >= 25){
      printf("Qualified for DBA!\n");
    }

}
