//5 - Escreva um programa que apresenta os n�meros divisores de um n�mero.
#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");

	int n, i, mod;
	
	printf("Digite o n�mero ao qual deseja saber seus divisores: ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		mod=n%i;
		if(mod==0)
		{
			printf("\n%d",i);
		}
	}
}
