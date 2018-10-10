#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  int h, m, s, entrada;
 
    
  printf("Digite os segundos: ");
  scanf("%d", &entrada);
  h = entrada / 3600;
  m = (entrada % 3600)/60;
  s = (entrada % 3600) % 60;
  printf("\n%d : %d : %d\n", h, m, s); 
  
   
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


