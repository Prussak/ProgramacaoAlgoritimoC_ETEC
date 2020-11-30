//conceito do aluno
//Bibliotecas de funções
#include<stdio.h> //Padrão
#include<math.h> //Matemática
#include<conio.h> //Funções
#include<locale.h>
//Comando Principal
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;

  printf ("Digite 1 se a nota for de 0 a 4.9. digite 2 se a nota for de 5 a 6.9 . Digite 3 se a nota for de 7 a 8.9. Digite 4 se a nota for de 9 a 10: ");
  scanf("%d", &opcao);
   
  switch (tipo)
  {
    case 1 :
    printf ("O conceito é I");
    break;
    
    case 2 :
    printf ("O conceito é R");
    break;
    
    case 3 :
    printf ("O conceito é B");
    break;
    
    case 4 :
    printf ("O conceito é MB");
    break;
		
   default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}  
		