/*2 - Criar um algoritmo que leia os elementos de uma matriz inteira de 
3 x 3 e imprimir todos os elementos, exceto os elementos da diagonal 
principal.*/
#include <stdio.h>
#include <stdlib.h> // rand(0) % 10;
#include <locale.h>
#include<time.h> // Necessário p/ função time()

main() {
	setlocale(LC_ALL,"");
	
	int matriz[3][3], linha, coluna;
	
	srand(time(NULL));
	
	for(linha=0 ; linha<3 ; linha++) {
		for(coluna=0 ; coluna<3 ; coluna++) {
			matriz[linha][coluna]= rand() % 10;
		}
	}
	
	for(linha=0 ; linha<3 ; linha++) {
		for(coluna=0 ; coluna<3 ; coluna++) {
			if(linha!=coluna) {
			printf("Matriz[%d][%d] = %d ",linha,coluna,matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
}
