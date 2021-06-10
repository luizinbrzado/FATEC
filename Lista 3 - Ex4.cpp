#include <stdio.h>

main()
{
	int i, n;
	
	printf("Fatorial de ");
	scanf("%d", &n) ;
	
	for(i = 1; n > 0; n--)
	{
	i = i * n;
	}
	
	printf("\neh %d", i);
}
