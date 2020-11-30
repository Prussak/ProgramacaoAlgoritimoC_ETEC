//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	

  printf ("Digite 1 para idade até 10 anos.\n Digite 2 para idade de 11 a 20 anos.\n Digite 3 para idade entre 21 e 50 anos.\n Digite 4 para idade acima de 51 anos: ");
  scanf("%d", &idade);
   
  switch (idade)
  {
	case 1 :
    printf ("A categoria é Infantil e o bônus de 500 pontos ");
    break;
	
	case 2 :
	printf ("A categoria é Juvenil e o bônus de 450 pontos ");
    break;
	
	case 3 :
    printf ("A categoria é Adulto e o bônus de 300 pontos ");
    break;
	
	case 4 :
    printf ("A categoria é Adulto e o bônus de 150 pontos ");
    break;
	
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		