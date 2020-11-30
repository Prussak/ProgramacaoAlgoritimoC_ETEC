//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int ano;
	float preco, aumento;

  printf ("Digite 1 para jogos lançados até 2017. Digite 2 para jogos lançados em 2018. Digite 3 para jogos lançados em 2019. Digite 4 para jogos lançados no ano de 2020: ");
  scanf("%d", &ano);
   
  printf("Digite o preço do jogo para calcular seu aumento: ");
  scanf("%f",&preco);
   
  switch (ano)
  {
	case 1 :
	aumento=preco+0.5;
    printf ("O preço com aumento é de R$: %0.2f  ", aumento);
    break;
	
	case 2 :
	aumento=preco+0.7;
    printf ("O preço com aumento é de R$: %0.2f  ", aumento);
    break;
	
	case 3 :
	aumento=preco+0.10;
    printf ("O preço com aumento é de R$: %0.2f ", aumento);
    break;
	
	case 4 :
	aumento=preco+0.15;
    printf ("O preço com aumento é de R$: %0.2f ", aumento);
    break;
	
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		