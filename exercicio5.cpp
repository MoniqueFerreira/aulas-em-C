#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  float vbruto, vliquido, vhora, htrab, vbonus, totalbonus;   
  int qtddep;
  
  printf("Digite o salario bruto do funcionario: ");
  scanf("%f", &vbruto);
  printf("Digite o valor do bonus: ");
  scanf("%f", &vbonus);
  printf("Digite a quantidade de dependentes: ");
  scanf("%d", &qtddep);
  totalbonus= vbonus*qtddep;
  vliquido= vbruto+totalbonus;
  printf("O salario liquido do funcionario eh de: %f \n", vliquido);
   
}


  
 // printf("\n Digite o 1o. numero : ");
 // scanf("%f", &num1);
  //system ("CLS");
  //printf("\n Digite o 2o. numero : ");
  //scanf("%f",&num2); 
 
//   soma = num1 + num2;

  // printf("\nA soma e : %f \n", soma); 
  
  //system("PAUSE");	
  //return 0;


