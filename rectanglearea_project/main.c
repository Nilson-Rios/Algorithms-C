#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "Portuguese");

  float b, h, a;

  printf("Vamos calcular a �rea de um ret�ngulo. \n");
  printf("Digite o valor da base do ret�ngulo: ");
  scanf("%f", &b);
  printf("A base b possui o valor: %.2f\n", b);


  printf("Digite a altura do ret�ngulo): ");
  scanf("%f", &h);
  printf("A altura �: %.2f\n", h);

  a = (b * h);

  printf("A �rea do ret�ngulo � de: %.2f", a);
      return 0;
}
