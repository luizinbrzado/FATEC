#include<stdio.h>
main()
{
	char estcivil; // int ou char -> exclui float

	printf("Digite seu estado civil: \n");
	printf("s - Solteiro \n");
	printf("c - Casado \n");
	printf("v - Viuvo \n");
	printf("d - Divorciado \n");
	scanf("%c",&estcivil);

	switch(estcivil) // if(menu>4) // operadores relacionais
	{
		case 's':				// Quando char, colocar entre aspas simples (')
			printf("Solteiro");
		break;
	
		case 'c':
			printf("Casado");
		break;
	
		case 'v':
			printf("Viuvo");
		break;
		
		case 'd':
			printf("Divorciado");
		break;

		default:
		printf("Estado civil nao informado");
	}
}
