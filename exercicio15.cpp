#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  float r, alt, area, pi;
     
  printf("Digite o valor do raio: ");
  scanf("%f", &r);
  printf("Digite o valor da altura: ");
  scanf("%f", &alt);
  printf("Digite o valor da area: ");
  scanf("%f", &area);
  pi = 3.14;
  area = 2*pi*r*(alt*r);
  printf("\nA área do círculo com o raio é: %f \n", area);
   
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


