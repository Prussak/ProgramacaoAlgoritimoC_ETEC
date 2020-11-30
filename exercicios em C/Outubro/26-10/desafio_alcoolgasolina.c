#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
//Declaração das Variaveis
char TC;
float precoA,precoG,CT;

//Variaveis de entrada
printf("Digite o Tipo de Carro, A para Alcool e G para Gasolina: ");
scanf("%s",&TC);
printf("Digite a capacidade total do tanque: ");
scanf("%f",&CT);

//Processamento
if (TC == 'A')
{
	precoA= 2.78 * CT;
	printf("O Total pago será: R$ %0.2f",precoA);

    
}else{
	
	precoG= 4.74 * CT;
	printf("O Total pago será: R$ %0.2f",precoG);
}


getch();

}