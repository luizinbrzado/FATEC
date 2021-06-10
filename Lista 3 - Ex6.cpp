// 6 - Faça um programa em C para exibir a tabuada de 0 a 9.

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num;
	
	printf("Tabuada do número: ");
	scanf("%d", &num);
	
	for(i=0;i<=10;i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}
	
}
