// Crie uma fun??o em linguagem C que receba 2 n?meros e retorne o maior valor.

#include <stdio.h>

int main() { 

	int num, num2;

	printf("Digite o primeiro numero: ");
	scanf("%d", &num);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	printf("\n");

 	if ( num > num2 ) {
		printf("%d eh o maior numero", num);
	} else {
		printf("%d eh o maior numero", num2);
	}  
	return 0;
}
