// Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o.

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
