#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float a, b;
	
	printf("M�dia de 7, 8 e 9 � %.1f", a=(7+8+9)/3);
	printf("\nM�dia de 4, 5 e 6 � %.1f", b=(4+5+6)/3);
	printf("\nSoma das duas m�dias � %.1f", a+b);
	printf("\nM�dia das m�dias � %.1f", (a+b)/2);
	printf("\nnha = %d",5+2);
}
