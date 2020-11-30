//desafio 2
//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int lanche, quantidade;
	float valor;

   printf ("Escolha seu lanche:");
   printf ("Digite 1 para Cachorro Quente. Digite 2 para X Salada. Digite 3 para X Frango. Digite 4 para X Tudo. ");
  scanf("%d", &lanche);
   
  switch (lanche)
  {
    case 1 :
    printf ("Seu lanche escolhido é o Cachorro Quente.");
    break;
    
    case 2 :
    printf ("Seu lanche escolhido é o X Salada.");
    break;
    
    case 3 :
    printf ("Seu lanche escolhido é o X Frango.");
    break;
    
    case 4 :
    printf ("Seu lanche escolhido é o X Tudo.");
    break;
		
   default :
    printf ("Valor invalido!\n");
  }
   
    printf ("Digite a quantidade da opção escolhida:");
    scanf("%d", &quantidade);
   if (lanche==1){
   valor= quantidade*5.0;
   printf ("O valor a ser pago é de %0.2f: ", valor);
   }else if (lanche == 2){
   valor= quantidade*7.0;
   printf ("O valor a ser pago é de %0.2f: ", valor);
   }else if (lanche== 3){
   valor= quantidade*9.0;
   printf ("O valor a ser pago é de %0.2f: ", valor);
   }else if (lanche== 4){
   valor= quantidade*12.0;
   printf ("O valor a ser pago é de %0.2f: ", valor);
}
   
  getch();
  return 0;
} 