/*
1 - Fa�a um programa que receba valores, mostrando na tela, e calcula a soma 
e a m�dia desses n�meros
Obs: O programa encerra quando receber um n�mero negativo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "");
	
	int num, num2, med=0;
	
	while(num>=0) {
		printf("Escreva um n�mero: ");
		scanf("%d", &num);
		printf("N�mero escolhido: %d \n", num);
			if(num<0)
			break;
		
		printf("\nEscreva outro n�mero: ");
		scanf("%d", &num2);
		printf("N�mero escolhido: %d \n", num2);
			if(num2<0)
			break;
		
		num = num + num2;

		med = num / 2;
		
		printf("\nM�dia � %d \n", med);
		printf("\n--Recome�ando--\n");
	}
	printf("Valor negativo encontrado!");
}
