/*3. Ler dois números inteiros A e B. Efetuar as operações de adição, subtração,
multiplicação e divisão ao final apresentar os quatro resultados obtidos.*/

//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções

//Comando Principal
int main()
{//inicio
	
	//Declaração das variaveis
	float A, B, Adi, Sub, Mul, Divi; 
	
	//Variaveis de entrada
	printf("Digite o valor de A:");
	scanf("%f", &A);
	printf("Digite o valor de B:");
	scanf("%f", &B);
	


		//Processamento
		Adi= A+B;
		Sub= A-B;
		Mul= A*B;
		Divi= A/B;
		
		
		//Variaveis de saída
		printf("A Adicao entrea A e B e  %f", Adi);
		printf("A Subtracao entre A e B e %f", Sub);
		printf("A Multiplicacao entre A e B e %f", Mul);
		printf("A Divisao entre A e B e %f", Divi);
		
		
		//getch()-tem a função de Imprimir o resultado no display (biblioteca conio.h)
		getch();
}