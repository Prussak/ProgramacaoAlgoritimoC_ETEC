#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
//Declaracao da variavel
int A;

//Variaveis de Entrada
printf("Digite um valor:");
scanf("%d",&A);

//Processamento
if(A>=1&&A<=9){
//Saída
    printf(" O Valor está na faixa permitida!");

}else{
    printf(" O Valor está fora da faixa permitida!");
    
    
}

getch();

}
