/*
7 - Solicitar a idade de v�rias pessoas e imprimir: Total de pessoas com menos 
de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando 
idade for = -99.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int idade, me21, ma50;
	
	printf("Idade: ");
	scanf("%d", &idade);
	
		if(idade<21)
		me21++;
		
		if(idade>50)
		ma50++;
	
	while(idade!=-99) {
		printf("Idade: ");
		scanf("%d", &idade);
		
		if(idade<21)
		me21++;
		
		if(idade>50)
		ma50++;
	}
	printf("\nH� %d pessoas com menos de 21 anos.", me21);
	printf("\nH� %d pessoas com mais de 50 anos.", ma50);
}
