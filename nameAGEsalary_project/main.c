#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  char nome[30];
  int idade;
  float sal, aumento, sf;

  printf("Qual o seu nome?");
  scanf("%s", &nome);

  printf("Qual a sua idade?");
  scanf("%d", &idade);

  printf("Qual o seu sal�rio?");
  scanf("%f", &sal);

  aumento = (sal * 0.3);
  sf = sal + aumento;

  printf("%s sua idade � %d e seu novo sal�rio �: %f\n", nome, idade, sf);

  return 0;
}


