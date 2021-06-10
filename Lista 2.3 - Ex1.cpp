#include<stdio.h>
main()
{
	int menu; // int ou char -> exclui float

	printf("--- MENU --- \n");
	printf("1 - Fazer checkin \n");
	printf("2 - Chamar serviço de quarto \n");
	printf("3 - Fazer pedido \n");
	scanf("%d",&menu);

	switch(menu) // if(menu>4) // operadores relacionais
		{
	case 1:
		printf("Fazer Check-in");
	break;

	case 2:
		printf("Chamar serviço de quarto");
	break;

	case 3:
		printf("Fazer pedido");
	break;

	default:
		printf("Entrada invalida");
}
}
