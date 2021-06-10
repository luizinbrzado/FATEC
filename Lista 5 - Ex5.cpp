/*5 - Armazenar nomes e notas da prova 1 e prova 2 de 15 alunos. Calcular e armazenar 
amédia. Armazenar também a situação do aluno: AP ou RP. Imprimir uma listagem 
contendo nome, média e situação de cada aluno.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main() {
	
	setlocale(LC_ALL,"");
	
	char nome[3][10], aprov;
	int i;
	float prova1[3], prova2[3], media[3];
	
	
	for (i=0; i<3; i++) {
		printf("Vetor[%d]\n", i);
		
		printf("Nome do aluno: ");
		scanf("%s", &nome[i]);
		
		printf("Nota da prova 1: ");
		scanf("%f", &prova1[i]);
		
		printf("Nota da prova 2: ");
		scanf("%f", &prova2[i]);
		
		printf("\n");
		
		media[i] = (prova1[i] + prova2[i]) / 2;
	}
	
	system("cls"); // BIBLIOTECA <stdlib.h> e serve para apagar mensagens anteriores do terminal
	
	for (i=0; i<3; i++) {
		printf("Aluno: %s\n", nome[i]);
		printf("Prova 1: %.2f\n", prova1[i]);
		printf("Prova 2: %.2f\n", prova2[i]);
		printf("Média: %.2f\n", media[i]);
		if(media[i]<6.0) {
			printf("Situação: RP\n\n");
		}
		
		else {
			printf("Situação: AP\n\n");
		}
	}
}
