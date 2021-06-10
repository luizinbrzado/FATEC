#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float a;
	
	printf("Coloque um valor qualquer: ");
	scanf("%f", &a);
	
	printf("O valor %.0f com 10 porcento de desconto é de %.2f.", a, a*0.91);
}
