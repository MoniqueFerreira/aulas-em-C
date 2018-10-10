#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  float mes1, mes2, mes3;   
  int vinicial, vjuros;
  
  vinicial= 500;
  vjuros= 1;   
  mes1= vinicial+(vinicial/100);
  mes2= (mes1)+(mes1/100);
  mes3= (mes2)+(mes2/100);
  printf("O resultado no 3 mes eh de: %f\n", mes3);
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


