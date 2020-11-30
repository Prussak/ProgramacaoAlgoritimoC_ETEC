#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
//Declaração das Variaveis
    int v, e, d, pontos ;

//Variaveis de entrada

printf("Digite o número de vitórias do time:");
scanf("%d",&v);
printf("Digite o numero de empates do time:");
scanf("%d",&e);
printf("Digite o número de derrotas do time:");
scanf("%d",&d);

//Processamento

pontos=((v*3)+(e*2)+(d*1));

//Saida do total de pontos

printf("O Total de Pontos do time é de %d", pontos);
//Estrutura de Decisão

if(pontos>=15)
{
	printf("Time Classificado!", pontos);
	
}else{
	printf("Time Desclassificado!", pontos);
	
}
	
	getch();

}