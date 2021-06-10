//Faça um programa que mostre na tela todos os números de 1 a 50 e depois 
//essa mesma lista invertida (50 a 1) usando laço for.

// soma dos pares de 0 a 100
#include<stdio.h>
main()
{
	//float num1, num2, num3, num4, num5;
	//float num;
	int i;
	
	//for(inicio;fim(condicao);passo)
	for(i=1 ; i<=50 ; i++)    // i = i+1;    i+=10
	{
		printf("i = %d \n",i);
	}
	
	printf("===========\n");
	
	for(i=50 ; i>=1 ; i--)    // i = i+1;    i+=10
	{
		printf("i = %d \n",i);
	}
	
}
