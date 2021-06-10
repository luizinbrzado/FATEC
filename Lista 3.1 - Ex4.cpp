/*Escreva um algoritmo que leia 20 números e imprima a soma dos positivos e o total 
de números negativos.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, n, pos=0, neg=0;
	
	for(i=1; i<=10; i++) {
		printf("Coloque o %dº valor: ", i);
		scanf("%d",&n);
		
		if(n>0)
			pos = pos + n;
			
		if(n<0)
			neg = neg + 1;
	}
	
	printf("A soma dos valores positivos é %d;", pos);
	printf("\nHá %d número(os) negativo(os).", neg);
}
