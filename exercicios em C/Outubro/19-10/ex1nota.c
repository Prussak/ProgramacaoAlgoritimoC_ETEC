//Bibliotecas de Funções
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

	int main()
	{
		setlocale(LC_ALL,"Portuguese");

	//Declração de Variaveis
	float N1,N2,N3,N4,M;

	//Variaveis de Entrada
	printf("Informe o valor da primeira nota N1:");
	scanf("%f",&N1);
	printf("Informe o valor da segunda nota N2:");
	scanf("%f",&N2);
	printf("Informe o valor da terceira nota N3:");
	scanf("%f",&N3);
	printf("Informe o valor da quarta nota N4:");
	scanf("%f",&N4);
	//Processamento
	M = ((N1+N2+N3+N4)/4);
	
	if(M>=6){
	    printf("Aluno Aprovado! %0.2f",M);
	    
	}else{
	    printf("Aluno Reprovado! %0.2f",M);
	}
	
	getch();
	}