#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "");
	int i, numero, maior=0, menor=0;

	for(i=1; i<=5; i++) {
	printf("\nEntre com o numero inteiro: ");
	scanf("%i", &numero);
	
		if(i==1) {
			maior=numero;
			menor=numero;
		}
	
		if(numero>maior) {
		maior=numero;
		}	
		else
		if(numero<menor) {
		menor=numero;
		}
	}
	printf("\nO menor numero é: %d", menor);
	printf("\nO maior numero é: %d", maior);
}
