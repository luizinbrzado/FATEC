/*3 - Preencher um vetor com números inteiros (8 unidades); solicitar um número doteclado. 
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. 
Se não existir,imprimir MSG que não existe.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, vetor[5], num, msg=0;
	
	for(i=0; i<5; i++) {
		printf("Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVerificar número: "); // Momento de verificar se tem o número que escolher no vetor
	scanf("%d", &num); 
	
	for(i=0; i<5; i++) {
		if (vetor[i] == num) {
			printf("\nNúmero %d está na posição %d no vetor.", num, i);
			msg=1;
		}
	}
	
	if(msg != 1) {
		printf("\nNúmero %d não existe no vetor!", num);
	}
}
