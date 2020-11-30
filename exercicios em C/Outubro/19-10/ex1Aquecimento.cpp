//Bibliotecas de Funções
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		
	//Declração de Variaveis
	int A,B,X;
	
	//Variaveis de Entrada
	printf("Informe um valor para a variavel A:");
	scanf("%d",&A);
	printf("Informe um valor para a variavel B:");
	scanf("%d",&B);
	
	//Processamento
	X=(A+B);
	printf("O resultado da soma é:%d \n \n",X);
	
	//Estrutura de decisão simples
	if (X>10)
		printf("O resultado da soma de %d com %d eh maior que 10",A,B);
	else
		printf("O resultado da soma de %d com %d não eh maior que 10",A,B);
	
	
	
	getch();

}
