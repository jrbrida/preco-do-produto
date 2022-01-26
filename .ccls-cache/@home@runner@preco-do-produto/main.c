#include <stdio.h>
#include<stdlib.h>
//utilizamos o operador do switch para fazer um calculo matemático de preços, poderiamos utlizar a instrução if, porém nosso execicio pedi um calculo matemático de porcentagem de preços sem utilizar a instrução if.
int main(void) {
  double preço;
  int i= 0;

  printf("Digite o preço do produto!!\n");
  printf("\t\t\t\t\t\t\t>>> ");
  scanf("%lf", &preço);
  printf("Digite [0] produto MENOR que R$ 100,00!\n");
  printf("Digite [1] produto MAIOR que R$ 100,00!\n");
  printf("\t\t\t\t\t\t\t\t\t\t>>> ");
  scanf(" %d", &i);

  switch(i){

    case 0:
    i = preço <= 100;
    preço = (preço) + (preço * 0.10);
    printf("O valor do produto é %.2lf", preço);
    break;

    case 1:
    i = preço >= 101;
    preço = (preço) + (preço * 0.20);
    printf("O valor do produto é: %.2lf", preço);
    break;
    
  }

  return 0;
}