//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int classificacao;
	float preco, desconto;

  printf ("Digite 1 para a classificação Topázio . Digite 2 para a classificão Safira. Digite 3 para a classificação Rubi . Digite 4 para a classificação Diamante: ");
  scanf("%d", &classificacao);
   
  printf("Digite o preço do jogo para calcular seu desconto: ");
  scanf("%f",&preco);
   
  switch (classificacao)
  {
	case 1 :
	desconto=preco-0.10;
    printf ("O preço com desconto é de R$ %0.2f ", desconto);
    break;
	
	case 2 :
	desconto=preco-0.15;
    printf ("O preço com desconto é R$ de %0.2f ", desconto);
    break;
	
	case 3 :
	desconto=preco-0.20;
    printf ("O preço com desconto é de R$ %0.2f  ", desconto);
    break;
	
	case 4 :
	desconto=preco-0.25;
    printf ("O preço com desconto é de R$ %0.2f  ", desconto);
    break;
	
	
   default :
   printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		