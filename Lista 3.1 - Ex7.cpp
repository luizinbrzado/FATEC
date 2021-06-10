/*Criar um algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e 
5, ao mesmo tempo, no intervalo fechado de 1 a NUM*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, num, tres, cinco;
	
	printf("Coloque um número: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++) {
		
		if(i%3==0) {
			printf("%d é múltiplo de 3\n", i);
		}
		if(i%5==0) {
			printf("%d é múltiplo de 5\n", i);
		}
		
		if(i%3==0 || i%5==0)
		printf("----------------\n");
	}	
}
