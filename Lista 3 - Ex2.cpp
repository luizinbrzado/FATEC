// soma dos pares de 0 a 100
#include<stdio.h>
main()
{

	int i, acum =0;
	
	//for(inicio;fim(condicao);passo)
	for(i=2 ; i<=50 ; i+=2)    // i = i+1 ; i+=10
	{
			acum=acum+i;
			
			printf("i = %d \n ",i);
			printf("acum = %d \n ",acum);	
	}
	
	printf("soma dos pares = %d \n ",acum);
}
