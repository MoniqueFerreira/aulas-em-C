#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  int anonasc, anodesejado, idade;   
    
  printf("Digite o ano de seu nascimento: ");
  scanf("%d", &anonasc);
  printf("Digite o ano do qual gostaria de saber sua idade. Ex: 2050: ");
  scanf("%d", &anodesejado);
  idade= anodesejado-anonasc;
  printf("Sua idade neste ano sera: %d \n", idade);
   
   
  system("PAUSE");	
  return 0;
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


