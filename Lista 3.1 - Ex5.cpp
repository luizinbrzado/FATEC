/* 5 - Criar um algoritmo que leia dez n�meros inteiros e imprima o maior e o segundo maior
n�mero da lista. */

#include <stdio.h>
#include <locale>

main ()
{
	
		setlocale(LC_ALL, "Portuguese");
		
		int i, n, maior, segmaior;
		
		for (i=1; i<=10; i++){
			
			printf("%d� num: ",i);
			scanf("%d",&n);
			
			if(n>maior) {
        	segmaior = maior;           
			maior = n;
         	}
         	
         	else
			if(n<maior && n>segmaior) {
        	segmaior = n;           
			maior = maior;        	
        	}
		}
		
		printf("\nO maior n�mero �: %d", maior);
		printf("\nO segundo maior n�mero �: %d", segmaior);
		
	}
