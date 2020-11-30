/*2. Ler três números inteiros e positivos (A, B e C) e calcule a seguinte expressão:
D = (pow(A+B,2) + pow(B+C,2)) / 2 */

//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	int A,B,C,D; 
	
	//Variaveis de entrada
	printf("Digite o valor de A:");
	scanf("%d", &A);
	printf("Digite o valor de B:");
	scanf("%d", &B);
	printf("Digite o valor de C:");
	scanf("%d", &C);


		//Processamento
		D = (pow(A+B,2) + pow(B+C,2)) / 2;
		
		//Variaveis de saída
		printf("A distancia entre os dois pontos e:%d", D); 
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}