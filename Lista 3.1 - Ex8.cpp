/*Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, a altura 
e o c�digo do sexo de uma pessoa (c�digo = 1 se for masculino e 2 se for feminino), e 
calcule e imprima:
- a maior e a menor altura da turma;
- a m�dia de altura das mulheres;
- a m�dia de altura da turma.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, alt, sex, maior, menor, mulher=0;
	float altturma, medaltmulher;
	
	printf("1�\n");
	printf("Altura: ");
	scanf("%d", &alt);
		
	printf("Sexo: ");
	scanf("%d", &sex);
	
	menor = alt;
	maior = alt;
	
	if(sex==2) {
		medaltmulher = medaltmulher + alt;
		mulher = mulher + 1;
	}
	
	altturma = altturma + alt;
	
	
	for(i=2; i<=4; i++) {
		printf("\n%d�", i);
		printf("\nAltura: ");
		scanf("%d", &alt);
		
		printf("Sexo: ");
		scanf("%d", &sex);
		
		if(alt<menor) {
			menor = alt;
		}
		
		if(alt>maior) {
			maior = alt;
		}
		
		if(sex==2) {
			medaltmulher = medaltmulher + alt;
			mulher = mulher + 1;
		}

		altturma = altturma + alt;
		
		printf("%.1f", altturma);
	}
	
	printf("\nA maior altura � %d", maior);
	printf("\nA menor altura � %d", menor);
	printf("\nA m�dia da altura das mulheres � %.1f", medaltmulher/mulher);
	printf("\nA m�dia da altura da turma � %.1f", altturma/i-1);
	
}
