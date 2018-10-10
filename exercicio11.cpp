#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  float cen, met, mil, dec; 
    
  printf("Digite os centimetros: ");
  scanf("%f", &cen);
  met = cen/100;
  dec = cen/10;
  mil = cen/1000;
  printf("\nMetros: %f \n", met);
  printf("\nCentimetros: %f \n", dec);
  printf("\nMilimetros: %f \n", mil);
 
   
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


