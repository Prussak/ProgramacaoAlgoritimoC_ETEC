
//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int carro;
	float km, consumo;

  printf ("Digite 1 para carro A.\n Digite 2 para carro B. \n Digite 3 para carro C.\n");
  scanf("%d", &carro);
   
  printf("Digite o percurso andado em km:\n ");
  scanf("%f",&km);
   
  switch (carro)
  {
	case 1 :
	consumo=8*km;
    printf ("O consumo estimado é de %0.2f: ", consumo);
    break;
	
	case 2 :
	consumo=9*km;
    printf ("O consumo estimado é de %0.2f: ", consumo);
    break;
	
	case 3 :
	consumo=12*km;
    printf ("O consumo estimado é de %0.2f: ", consumo);
    break;
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		