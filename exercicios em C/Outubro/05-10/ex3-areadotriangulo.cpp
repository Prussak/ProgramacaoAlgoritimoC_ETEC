/*Área do Triangulo A=(b*h)/2 */
//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	float A,B,H;
	
	//Variaveis de entrada
	printf("Digite o valor da base:");
	scanf("%f", &B);//e-comercial tem função de endereçar a variavel de entrada na memoria
	printf("Digite o valor da altura");
	scanf("%f", &H);//e-comercial tem função de endereçar a variavel de entrada na memoria

		//Processamento
		A=(B*H)/2;
		
		//Variaveis de saída
		printf("O resultado da Area do triangulo e: %0.2f", A);//%0.2f  mascara para variaveis de saida do tipo float  
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}