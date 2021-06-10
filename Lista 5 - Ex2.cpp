#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	
	int i;
	float salario[3], reajuste[3];
	char nome[3][10];
	
	for(i=0; i<3; i++) {
		printf("Vetor %d:\n", i);
		printf("Nome: ");
		scanf("%s", &nome[i]);
		
		printf("Salário: ");
		scanf("%f", &salario[i]);
		printf("\n");
	}
	
	for(i=0; i<3; i++) {
		printf("\n%d:\n", i);
		printf("%s\n", nome[i]);
		reajuste[i] = salario[i] * 1.08;
		printf("Salário reajustado de R$%.2f para R$%.2f\n", salario[i], reajuste[i]);
	}
}
