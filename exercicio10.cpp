#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");	
  float nota1, nota2, nota3, nota4, mediafinal;
  char nomealuno;
 
    
  printf("Digite o nome do aluno: ");
  scanf("%s", &nomealuno);
  printf("Digite a nota do primeiro bimestre: ");
  scanf("%f", &nota1);
  printf("Digite a nota do segundo bimestre: ");
  scanf("%f", &nota2);
  printf("Digite a nota do terceiro bimestre: ");
  scanf("%f", &nota3);
  printf("Digite a nota do quarto bimestre: ");
  scanf("%f", &nota4);
  mediafinal = (nota1+nota2+nota3+nota4)/4;  
  printf("\nSua media final é: %f \n", mediafinal); 
   
   
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


