/*
6 - Fa�a um programa que dada uma quantia de dinheiro em libras inglesas 
imprime o equivalente em d�lares canadenses. A rela��o � �1,0 = $1,84. Depois 
disso, pergunte se o usu�rio quer ou n�o transformar mais algum valor; se n�o 
quiser, encerre.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int perg;
	float libras, canad;
	
	printf("Convers�o de libras para d�lares canadenses: �");
	scanf("%f", &libras);
	
	canad = libras * 1.84;
	
	printf("\n�%.2f � C$%.2f.\n", libras, canad);
	
	printf("\nQuer converter mais algum valor? (1 - S ou 2 - N):");
	scanf("%d", &perg);
	
		while (perg==1) {
			printf("\nConvers�o de libras para d�lares canadenses: �");
		scanf("%f", &libras);
		
		canad = libras * 1.84;
		
		printf("\n�%.2f � C$%.2f.\n", libras, canad);
		
		printf("\nQuer converter mais algum valor? (1 - S ou 2 - N):");
		scanf("%d", &perg);
		}
}
