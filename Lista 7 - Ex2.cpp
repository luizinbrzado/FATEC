// Crie uma fun��o que receba um valor e diga se � nulo ou n�o

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
