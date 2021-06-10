// Crie uma função que receba um valor e diga se é nulo ou não

#include <stdio.h>

int main() { 

	int valor;

	printf("Digite um numero: ");

	scanf("%d", &valor);
 
 	if ( valor == 0 ) {
		printf("Valor nulo");
	} else {
		printf("Valor nao nulo");
	}  
	return 0;
}
