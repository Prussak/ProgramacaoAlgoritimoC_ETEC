//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int tipo,x, y,;
	float resultado;
	
  printf ("Digite o valor 1 para Somar, digite o valor 2 para Subtrair, 3 para Multiplicação, 4 para Divisão: ");
  scanf("%d", &tipo);
  
  printf("Digite um valor inteiro de x:");
  scanf("%d",&x);
  
  printf("Digite um valor inteiro de y:");
  scanf("%d",&y);
  
  
   
  
  switch (tipo)
  {
    case 1 :
	resultado=x+y;
    printf ("O valor da soma é %f ", resultado);
    break;
    
    case 2 :
	resultado=x-y;
    printf ("O valor da subtração é %f ", resultado);
    break;
    
    case 3 :
	resultado=x*y;
    printf ("O valor da multiplicação é %f ", resultado);
    break;
    
    case 4 :
	resultado=x/y;
    printf ("O valor da divisão é %f ", resultado);
    break;
		
  
   default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		
		