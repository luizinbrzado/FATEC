#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float a;
	
	printf("Coloque um valor qualquer: ");
	scanf("%f", &a);
	
	printf("O valor %.0f com reajuste de 10 porcento � de %.2f.", a, a*1.1);
}
