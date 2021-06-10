/*
6 - Faça um programa que dada uma quantia de dinheiro em libras inglesas 
imprime o equivalente em dólares canadenses. A relação é £1,0 = $1,84. Depois 
disso, pergunte se o usuário quer ou não transformar mais algum valor; se não 
quiser, encerre.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int perg;
	float libras, canad;
	
	printf("Conversão de libras para dólares canadenses: £");
	scanf("%f", &libras);
	
	canad = libras * 1.84;
	
	printf("\n£%.2f é C$%.2f.\n", libras, canad);
	
	printf("\nQuer converter mais algum valor? (1 - S ou 2 - N):");
	scanf("%d", &perg);
	
		while (perg==1) {
			printf("\nConversão de libras para dólares canadenses: £");
		scanf("%f", &libras);
		
		canad = libras * 1.84;
		
		printf("\n£%.2f é C$%.2f.\n", libras, canad);
		
		printf("\nQuer converter mais algum valor? (1 - S ou 2 - N):");
		scanf("%d", &perg);
		}
}
