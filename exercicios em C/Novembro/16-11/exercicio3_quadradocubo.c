escreva um relatório administrativo baseado no plano de ação anteriormente elaborado.
Obs.: Mínimo: três páginas; Máximo: 5 páginas.
	int operacao;
	float x,resultado;
	
  printf ("Digite o valor 1 para calcular o valor ao quadrado, digite o valor 2 para calcular o valor ao cubo: ");
  scanf("%d", &operacao);
  
  printf("Digite o valor de x ");
  scanf("%f",&x);
    
  switch (operacao)
  {
    case 1 :
	resultado=pow(x,2);
    printf ("O valor do quadrado é %0.2f: ", resultado);
    break;
    
    case 2 :
	resultado=pow(x,3);
    printf ("O valor ao cubo é %0.2f: ", resultado);
    break;
        	
  
   default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
} 