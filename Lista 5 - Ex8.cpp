/*8 - Preencher um vetor de 10 elementos inteiros. Calcular a m�dia do vetor. Mostrar quantos 
numeros s�o m�ltiplos de 5. Quantos n�meros s�o maiores que 10 e menores que 30. Qual
o maior e o menor n�mero do vetor*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, multcinco=0, maiormenor=0, maior, menor, vetor[3];
	float media, soma;
	
	for(i=0; i<3; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &vetor[i]);
		
		// Calcular m�dia do vetor
		soma = soma + vetor[i];
		
		// Quantos n�meros m�ltiplos de 5
		if(vetor[i] % 5 == 0) {
			multcinco++;
		}
		
		// Quantos n�meros maiores que 10 e menores que 30
		if(vetor[i]>10 && vetor[i]<30) {
			maiormenor++;
		}
		
		// Maior e menor n�mero do vetor
		if(i==0) {
			menor = vetor[i];
			maior = vetor[i];
		}
		else
		if(vetor[i]>maior) {
			maior = vetor[i];
		}
		else
		if (vetor[i]<menor) {
			menor = vetor[i];
		}
	}
	
	media = soma / 3;
	
	printf("\nM�dia do vetor � %.2f", media);
	printf("\nH� %d n�mero(s) m�ltiplos de 5", multcinco);
	printf("\nH� %d n�mero(s) maiores que 10 e menores que 30", maiormenor);
	printf("\nO maior n�mero � %d e o menor � %d", maior, menor);
}
