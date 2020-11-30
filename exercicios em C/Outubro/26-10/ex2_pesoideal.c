//Faça um programa que pergunte o nome do usuário, sexo (1-masculino e 2-feminino) e altura.
// O programa deve calcular o peso ideal partindo das fórmulas: Masculino: PI= (72.7*H) - 58 Feminino: PI= (62.1*H) - 44.7
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
//Declaração das Variaveis
int sex;
float PI,H; 
//Variaveis de entrada
printf("Digite 1 para sexo Feminino, ou, Digite 2 para sexo Masculino: ");
scanf("%d",&sex);
printf("Digite sua Altura: ");
scanf("%f", &H);
//Processamento
if(sex==1)
{
PI= (62.1*H) - 44.7;	
printf("Seu peso ideal é %f", PI);
}else{
PI= (72.7*H) - 58;
printf("Seu peso ideal é %f", PI);
}


getch();
}