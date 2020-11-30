//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int temperatura;
	

  printf ("Digite a temperatura mais próxima 0, 10, 15, 20, 25, 30: \n");
  scanf("%d", &temperatura);
   
  switch (temperatura)
  {
	case 0 :
    printf ("Opção de Agasalho: Casado de couro forrado de lã ");
    break;
	
	case 10 :
    printf ("Opção de Agasalho: Casaco de couro");
    break;
	
	case 15 :
    printf ("Suéter de Lã ");
    break;
	
	case 20 :
    printf ("Jaqueta Jeans ");
    break;
	
	case 25 :
    printf ("Moletom ");
    break;
	
	case 30 :
    printf ("Camiseta de malha");
    break;
	
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		