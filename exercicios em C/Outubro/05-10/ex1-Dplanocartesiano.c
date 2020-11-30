/*Dadas as coordenadas (X, Y) de dois pontos no plano cartesiano.  Calcular e
exibir a diância entre esses dois pontos
exibir a diância entre esses dois pontos.
D=sqrt(pow(X2-X1,2) + pow(Y2-Y1,2)) */

//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	float D,X1,X2,Y1,Y2;
	
	//Variaveis de entrada
	printf("Digite a coordenada X1:");
	scanf("%f", &X1);
	printf("Digite a coordenada X2:");
	scanf("%f", &X2);
	printf("Digite a coordenada Y1:");
	scanf("%f", &Y1);
	printf("Digite a coordenada Y2:");
	scanf("%f", &Y2);

		//Processamento
		D=sqrt((pow(X2-X1,2)) + (pow(Y2-Y1,2)));
		
		//Variaveis de saída
		printf("A distancia entre os dois pontos e:%f", D); 
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}
