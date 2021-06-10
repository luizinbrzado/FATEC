/*3 - Preencher um vetor com n�meros inteiros (8 unidades); solicitar um n�mero doteclado. 
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor. 
Se n�o existir,imprimir MSG que n�o existe.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, vetor[5], num, msg=0;
	
	for(i=0; i<5; i++) {
		printf("Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVerificar n�mero: "); // Momento de verificar se tem o n�mero que escolher no vetor
	scanf("%d", &num); 
	
	for(i=0; i<5; i++) {
		if (vetor[i] == num) {
			printf("\nN�mero %d est� na posi��o %d no vetor.", num, i);
			msg=1;
		}
	}
	
	if(msg != 1) {
		printf("\nN�mero %d n�o existe no vetor!", num);
	}
}
