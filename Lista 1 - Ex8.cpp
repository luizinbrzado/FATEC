#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float a, b;
	
	printf("Média de 7, 8 e 9 é %.1f", a=(7+8+9)/3);
	printf("\nMédia de 4, 5 e 6 é %.1f", b=(4+5+6)/3);
	printf("\nSoma das duas médias é %.1f", a+b);
	printf("\nMédia das médias é %.1f", (a+b)/2);
	printf("\nnha = %d",5+2);
}
