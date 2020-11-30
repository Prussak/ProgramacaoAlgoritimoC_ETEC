//Volume = 3.14159*(R)²*H
//pow(R,2) Potenciação

//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	float V,R,H;
	
	//Variaveis de entrada
	printf("Digite o valor do raio");
	scanf("%f", &R);//e-comercial tem função de endereçar a variavel de entrada na memoria
	printf("Digite o valor da altura");
	scanf("%f", &H);//e-comercial tem função de endereçar a variavel de entrada na memoria

		//Processamento
		V=3.14159*pow(R,2)*H;
		
		//Variaveis de de saída
		printf("O resultado do volume e: %0.2f", V);//%0.2f  mascara para variaveis de saida do tipo float  
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}