/*
5 - Fa�a um programa que leia v�rios inteiros positivos e mostre, no final, a soma 
dos n�meros pares e a soma dos n�meros �mpares. O programa para quando 
entrar um n�mero maior que 1000.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num, npar=0, nimpar=0;
	
	printf("Coloque um n�mero: ");
	scanf("%d", &num);
	
	if(num%2==0) {
		npar = npar + num;
	}
	else {
		nimpar = nimpar + num;
	}
		
	while(npar<1000 && nimpar<1000) {
		printf("Coloque um n�mero: ");
		scanf("%d", &num);
		
		if(num%2==0) {
			npar = npar + num;
		}
		else {
			nimpar = nimpar + num;
		}
	}
	
	printf("\nSoma dos pares � %d", npar);
	printf("\nSoma dos �mpares � %d", nimpar);
}
