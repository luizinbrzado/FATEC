/*
5 - Faça um programa que leia vários inteiros positivos e mostre, no final, a soma 
dos números pares e a soma dos números ímpares. O programa para quando 
entrar um número maior que 1000.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num, npar=0, nimpar=0;
	
	printf("Coloque um número: ");
	scanf("%d", &num);
	
	if(num%2==0) {
		npar = npar + num;
	}
	else {
		nimpar = nimpar + num;
	}
		
	while(npar<1000 && nimpar<1000) {
		printf("Coloque um número: ");
		scanf("%d", &num);
		
		if(num%2==0) {
			npar = npar + num;
		}
		else {
			nimpar = nimpar + num;
		}
	}
	
	printf("\nSoma dos pares é %d", npar);
	printf("\nSoma dos ímpares é %d", nimpar);
}
