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

  printf("Qual o seu salário?");
  scanf("%f", &sal);

  aumento = (sal * 0.3);
  sf = sal + aumento;

  printf("%s sua idade é %d e seu novo salário é: %f\n", nome, idade, sf);

  return 0;
}


