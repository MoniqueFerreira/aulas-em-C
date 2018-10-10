#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  float peso, excesso, multa;
     
  printf("Informe o peso total: ");
  scanf("%f", &peso);
  excesso = peso-50;
  	if (excesso>0) {
  	multa = excesso*4;
  	printf("\nSua multa será de: %f\n", multa);
}
  else
	printf("\nNão pagará multa\n");   
       
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


