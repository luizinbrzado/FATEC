/*Escreva um algoritmo que leia 20 n�meros e imprima a soma dos positivos e o total 
de n�meros negativos.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, n, pos=0, neg=0;
	
	for(i=1; i<=10; i++) {
		printf("Coloque o %d� valor: ", i);
		scanf("%d",&n);
		
		if(n>0)
			pos = pos + n;
			
		if(n<0)
			neg = neg + 1;
	}
	
	printf("A soma dos valores positivos � %d;", pos);
	printf("\nH� %d n�mero(os) negativo(os).", neg);
}
