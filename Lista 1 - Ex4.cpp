#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float temp;
	
	printf("Coloque a temperatura atual em graus Celsius: ");
	scanf("%f", &temp);
	
	printf("Essa temperatura em graus Fahrenheint é %.2f.", (temp*9/5)+32);
}
