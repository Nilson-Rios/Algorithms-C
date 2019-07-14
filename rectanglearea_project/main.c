#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "Portuguese");

  float b, h, a;

  printf("Vamos calcular a área de um retângulo. \n");
  printf("Digite o valor da base do retângulo: ");
  scanf("%f", &b);
  printf("A base b possui o valor: %.2f\n", b);


  printf("Digite a altura do retângulo): ");
  scanf("%f", &h);
  printf("A altura é: %.2f\n", h);

  a = (b * h);

  printf("A área do retângulo é de: %.2f", a);
      return 0;
}
