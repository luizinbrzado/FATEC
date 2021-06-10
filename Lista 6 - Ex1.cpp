/*1 - Criar um algoritmo que leia os elementos de uma matriz inteira de
4 x 4 e imprimir os elementos da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h> // rand(0) % 10;
#include <locale.h>
#include<time.h> // Necessário p/ função time()

main() {
	setlocale(LC_ALL,"");
	
	int matriz[4][4], linha, coluna;
	
	srand(time(NULL));
	
	for(linha=0 ; linha<3 ; linha++)
	{
		for(coluna=0 ; coluna<3 ; coluna++)
		{
			matriz[linha][coluna]= rand() % 10;
		}
	}
	
	for(linha=0 ; linha<3 ; linha++)
	{
		for(coluna=0 ; coluna<3 ; coluna++)
		{
			printf("Matriz[%d][%d] = %d ",linha,coluna,matriz[linha][coluna]);
		}
		printf("\n");
	}
}
