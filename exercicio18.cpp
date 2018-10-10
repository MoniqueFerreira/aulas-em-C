#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  int a, b, x;
     
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  x = a;
  a = b;
  b = x;
    
  printf("\nO valor de A é: %d\n", a);
  printf("\nO valor de B é: %d\n", b);
  
   
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


