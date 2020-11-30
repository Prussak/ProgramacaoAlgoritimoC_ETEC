//Peça para o usuário digitar um número e o programa deve informar se este é par ou ímpar.
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
//Declaração das Variaveis
int n;

//Variaveis de entrada
printf("Digite um número: ");
scanf("%d",&n);


//Processamento
if(n%2==0)
{
	printf("O número é par");
}else{
	printf("O número é impar");
}

getch();
}