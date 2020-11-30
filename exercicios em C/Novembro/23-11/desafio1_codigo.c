//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int codigo;
	

  printf ("Digite 1 para alimentos não pereciveis. \n Digite 2, 3 ou 4 para alimento perecivel.\n Digite 5 ou 6 para vestuário.\n Digite 7 para Higiene Pessoal.\n Digite 8 a 15 para Limpeza e Utensílios Domésticos :\n ");
  scanf("%d", &codigo);
   
  switch (codigo)
  {
	case 1 :
    printf ("Alimento não perecivel");
    break;
	
	case 2:
	case 3:
	case 4:
	printf ("Alimento Perecivel");
    break;
	
	case 5:
	case 6:
    printf ("vestuário");
    break;
	
	case 7 :
    printf (" Higiene Pessoal");
    break;
	
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
    case 15:
    printf ("Limpeza e Utensílios Domésticos");
    break;
	
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		