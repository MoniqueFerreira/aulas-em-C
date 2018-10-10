#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  float a, v, d, p, area, volume, diag, peri;
     
  printf("Digite a área: ");
  scanf("%f", &a);
  printf("Digite o volume: ");
  scanf("%f", &v);
  printf("Digite a diagonal: ");
  scanf("%f", &d);
  printf("Digite o perímetro: ");
  scanf("%f", &p);
  volume = a*v*p;
  area = 2*(a*d+a*v+d*v);
  diag = sqrt(v+a);
  peri = (v*2) + (a*2);
    
  printf("\nA área é: %f\n", area);
  printf("\nO volume é: %f\n", volume);
  printf("\nA diagonal é: %f\n", diag);
  printf("\nPerímetro é: %f\n", peri);
  
   
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


