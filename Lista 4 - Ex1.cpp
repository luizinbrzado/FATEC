/*
1 - Faça um programa que receba valores, mostrando na tela, e calcula a soma 
e a média desses números
Obs: O programa encerra quando receber um número negativo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "");
	
	int num, num2, med=0;
	
	while(num>=0) {
		printf("Escreva um número: ");
		scanf("%d", &num);
		printf("Número escolhido: %d \n", num);
			if(num<0)
			break;
		
		printf("\nEscreva outro número: ");
		scanf("%d", &num2);
		printf("Número escolhido: %d \n", num2);
			if(num2<0)
			break;
		
		num = num + num2;

		med = num / 2;
		
		printf("\nMédia é %d \n", med);
		printf("\n--Recomeçando--\n");
	}
	printf("Valor negativo encontrado!");
}
