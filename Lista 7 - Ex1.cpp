// Crie uma função que receba um valor e informe se ele é positivo ou não.

#include <stdio.h>

int main() { 

	int valor;

	printf("Digite um numero: ");

	scanf("%d", &valor);
 
 	if ( valor < 0 ) {
		printf("Valor negativo");
	} else {
		printf("Valor positivo");
	}  
	return 0;
}
