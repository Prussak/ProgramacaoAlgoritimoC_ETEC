/* Calcular área do quadrado Fórmula:A=L²*/

//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	float A,L;
	
	//Variaveis de entrada
	printf("Digite o lado do quadrado:");
	scanf("%f", &L);//e-comercial tem função de endereçar a variavel de entrada na memoria

		//Processamento
		A=(L*L);
		
		//Variaveis de saída
		printf("O resultado da area e: %0.2f", A);//%0.2f  mascara para variaveis de saida do tipo float  
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}


