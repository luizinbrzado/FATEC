/*Criar um algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma 
do quadrado desses números*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, quad=0, acum=0;
	
	for(i=1; i<=100; i++) {
		printf("Valor: %d\n", i);
		
		quad = i * i;
		acum = acum + quad;
		printf("Soma do quadrado: %d\n", acum);
	}
}
