/*Criar um algoritmo que leia um n�mero (NUM) e ent�o imprima os m�ltiplos de 3 e 
5, ao mesmo tempo, no intervalo fechado de 1 a NUM*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, num, tres, cinco;
	
	printf("Coloque um n�mero: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++) {
		
		if(i%3==0) {
			printf("%d � m�ltiplo de 3\n", i);
		}
		if(i%5==0) {
			printf("%d � m�ltiplo de 5\n", i);
		}
		
		if(i%3==0 || i%5==0)
		printf("----------------\n");
	}	
}
