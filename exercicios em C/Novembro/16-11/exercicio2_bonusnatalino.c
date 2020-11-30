//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int categoria;
	float bonus,salario;
	
  printf ("Digite o valor 1 Solteiro, digite o valor 2 para Casado e com filhos, digite 3 casado sem filhos: ");
  scanf("%d", &categoria);	
  
  printf("Digite o valor do salário: ");
  scanf("%f",&salario);
    
  switch (categoria)
  {
    case 1 :
	bonus=salario*0.05;
    printf ("Seu bonus natalino é %0.2f: ", bonus);
    break;
    
    case 2 :
	bonus=salario*0.2;
    printf ("Seu bonus natalino é %0.2f: ", bonus);
    break;
    
    case 3 :
	bonus=salario*0.15;
    printf ("Seu bonus natalino é %0.2f: ", bonus);
    break;
    	
  
   default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
} 