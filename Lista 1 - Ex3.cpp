#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	int a;
	
	printf("Coloque um valor qualquer: ");
	scanf("%d", &a);
	
	printf("O sucessor de %d é %d e o atecessor é %d.", a, a+1, a-1);
}
