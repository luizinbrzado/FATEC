#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float a, b, c;
	
	printf("Informe tr�s n�meros: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	printf("A m�dia entre os n�meros %.0f, %.0f e %.0f � %.2f", a, b, c, (a+b+c)/3);
}