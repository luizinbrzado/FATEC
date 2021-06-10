#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	int a;
	
	printf("Coloque um valor qualquer: ");
	scanf("%d", &a);
	printf("O quadrado de %d eh %d", a, a*a);
}