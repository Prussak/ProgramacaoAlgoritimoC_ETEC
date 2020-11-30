
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
//Declaração das Variaveis
int opcao;
float x,raiz_quadrada,ao_cubo;

//Variaveis de entrada
printf("Digite um número: ");
scanf("%f",&x);
printf("Escolha uma das opções a seguir: ");
printf("Para Calcular a Raiz Quadrada digite 1, para calcular o cubo digite 2: ");
scanf("%d",&opcao);

//Processamento
if (opcao == 1)
{
	raiz_quadrada = sqrt(x);
	printf("A raiz quadrada é %0.2f: ",raiz_quadrada);

    
}else{
	
	ao_cubo = pow(x,3);
	printf("O numero elevado ao cubo é: %0.2f",ao_cubo);
}


getch();

}