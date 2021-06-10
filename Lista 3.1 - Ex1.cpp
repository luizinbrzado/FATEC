/*Escreva um algoritmo que receba 15 números e imprima quantos números maiores 
que 30 foram digitados.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, n, acum=0;
	
	for(i=1; i<=5; i++) {
	printf("Escreva o %dº número: ", i);
	scanf("%d", &n);

	if(n>=30)
	acum = acum + 1;
	}
	
	printf("\nHá %d números acima de 30.", acum);
}

