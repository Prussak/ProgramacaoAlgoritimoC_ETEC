#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
//Declaração das variaveis
int I;
float Renda,P,F;
char nome[30];
 //Entrada de Variaveis
 printf("Digite o seu nome: ");
 scanf("%s",nome);
 
 printf("Qual investimento você deseja? Digite 1 para Poupança e 2 para Renda Fixa: ");
 scanf("%d",&I);
 
 printf("Quanto você deseja investir? ");
 scanf("%f",&Renda);
 
 //Processamento
 if(I==1)
 {
 P= Renda +(Renda*0.03);
 printf("O cliente %s possuirá uma poupança de R$ %0.2f",nome, P);
 
}else{
	F= Renda +(Renda*0.04);
	printf("O cliente %s possuirá fundos de Renda Fixa de R$ %0.2f",nome,F);
	
}
 
 getch();
}