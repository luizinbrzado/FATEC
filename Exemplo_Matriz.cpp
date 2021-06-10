#include <stdio.h>

main() {
	int linha, coluna, soma; // i, j
	float matriz[3][3];
	
	for (linha=0; linha<3; linha++) {
		for(coluna=0; coluna<3; coluna++) {
			printf("Matriz[%d][%d]:", linha, coluna);
			scanf("%f", &matriz[linha][coluna]);
			soma = soma + matriz[linha][coluna];
		}
	}
	
	
	
	for (linha=0; linha<3; linha++) {
		for(coluna=0; coluna<3; coluna++) {
			printf("Matriz[%d][%d] = %.2f ", linha, coluna, matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	
	/* ---------------- PEDINDO LINHA E COLUNA PARA MOSTRAR O NÚMERO ALOCADO ----------------
	
	printf("\nEscolha uma linha e uma coluna desejada: ");
	printf("\nLinha: ");
	scanf("%d", &linha);
	printf("Coluna: ");
	scanf("%d", &coluna);

	printf("Matriz[%d][%d] foi escolhida = %.0f\n\n", linha, coluna, matriz[linha][coluna]);
	*/
	
	
	/* ---------------- MOSTRANDO DIAGONAL PRINCIPAL ----------------
	
	for (linha=0; linha<3; linha++) {
		for(coluna=0; coluna<3; coluna++) {
			if(linha==coluna) {
				printf("Matriz [%d][%d] = %.2f", linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
	
	
	/* ---------------- COLOCANDO NÚMERO 0 NA DIAGONAL PRINCIPAL ----------------
	
	for (linha=0; linha<3; linha++) {
		for(coluna=0; coluna<3; coluna++) {
			if(linha==coluna) {
				matriz[linha][coluna] = 0;
				printf("Depois: Matriz[%d][%d] = %.2f ", linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
	
	
	/* ---------------- COLOCANDO A SOMA DA MATRIZ NA DIAGONAL PRINCIPAL ----------------
	
	for(linha=0 ; linha<3 ; linha++) { // percorre linha
		for(coluna=0 ; coluna<3 ; coluna++) { // percorre coluna
			if(linha==coluna) {
				printf("Matriz[%d][%d] = %d ",linha, coluna, soma);
			}
			else {
				printf("Matriz[%d][%d] = %.2f ",linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
	
	
	/* ---------------- COLOCANDO VALORES ACIMA DA DIAGONAL PRINCIPAL ----------------
	
	for(linha=0 ; linha<3 ; linha++) { // percorre linha
		for(coluna=0 ; coluna<3 ; coluna++) { // percorre coluna
			if(linha<coluna) {
				printf("Matriz[%d][%d] = %d ",linha, coluna, soma);
			}
			else {
				printf("Matriz[%d][%d] = %.2f ",linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
	
	
	/* ---------------- COLOCANDO VALORES ABAIXO DA DIAGONAL PRINCIPAL ----------------
	
	for(linha=0 ; linha<3 ; linha++) { // percorre linha
		for(coluna=0 ; coluna<3 ; coluna++) { // percorre coluna
			if(linha>coluna) {
				printf("Matriz[%d][%d] = %d ",linha, coluna, soma);
			}
			else {
				printf("Matriz[%d][%d] = %.2f ",linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
	
	
	/* ---------------- COLOCANDO VALORES NA DIAGONAL SECUNDÁRIA ----------------
	
	for(linha=0 ; linha<3 ; linha++) { // percorre linha
		for(coluna=0 ; coluna<3 ; coluna++) { // percorre coluna
			if(linha + coluna == 2) {
				printf("Matriz[%d][%d] = %d ",linha, coluna, soma);
			}
			else {
				printf("Matriz[%d][%d] = %.2f ",linha, coluna, matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	*/
}
