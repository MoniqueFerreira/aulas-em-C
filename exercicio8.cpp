#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  float x, n, resultado;
 
    
  printf("Digite o valor de X: ");
  scanf("%f", &x);
  printf("Digite o valor de N: ");
  scanf("%f", &n);
  resultado= pow ((x*n), 2);
  printf("O valor do calculo eh: %f \n", resultado);
   
   
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


