/*
3 - Faça um programa que receba valores, mostrando na tela, no final imprima o 
maior e o menor desses números.
Obs: O programa encerra quando receber um número negativo.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num=0, maior=0, menor=0;
	
	printf("Coloque um número NÃO NEGATIVO: ");
	scanf("%d", &num);
		
		if(num>maior)
		maior = num;
		else
		if(num<menor && menor>0)
		menor = num;
	
	maior = num;
	menor = num;
	
	if(num<0)
	printf("\nAssim não dá né amigo!");
	
	while(num>=0) {
		printf("Coloque um número: ");
		scanf("%d", &num);
		
		if(num>maior)
		maior = num;
		else
		if(num<menor && num>0)
		menor = num;
	}
	
	if(menor>0 && maior>0) {
	
	printf("Menor número é %d", menor);
	printf("\nMaior número é %d", maior);
	}
}
