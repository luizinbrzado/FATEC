/*
3 - Fa�a um programa que receba valores, mostrando na tela, no final imprima o 
maior e o menor desses n�meros.
Obs: O programa encerra quando receber um n�mero negativo.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num=0, maior=0, menor=0;
	
	printf("Coloque um n�mero N�O NEGATIVO: ");
	scanf("%d", &num);
		
		if(num>maior)
		maior = num;
		else
		if(num<menor && menor>0)
		menor = num;
	
	maior = num;
	menor = num;
	
	if(num<0)
	printf("\nAssim n�o d� n� amigo!");
	
	while(num>=0) {
		printf("Coloque um n�mero: ");
		scanf("%d", &num);
		
		if(num>maior)
		maior = num;
		else
		if(num<menor && num>0)
		menor = num;
	}
	
	if(menor>0 && maior>0) {
	
	printf("Menor n�mero � %d", menor);
	printf("\nMaior n�mero � %d", maior);
	}
}
