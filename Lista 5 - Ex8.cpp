/*8 - Preencher um vetor de 10 elementos inteiros. Calcular a média do vetor. Mostrar quantos 
numeros são múltiplos de 5. Quantos números são maiores que 10 e menores que 30. Qual
o maior e o menor número do vetor*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, multcinco=0, maiormenor=0, maior, menor, vetor[3];
	float media, soma;
	
	for(i=0; i<3; i++) {
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
		
		// Calcular média do vetor
		soma = soma + vetor[i];
		
		// Quantos números múltiplos de 5
		if(vetor[i] % 5 == 0) {
			multcinco++;
		}
		
		// Quantos números maiores que 10 e menores que 30
		if(vetor[i]>10 && vetor[i]<30) {
			maiormenor++;
		}
		
		// Maior e menor número do vetor
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
	
	printf("\nMédia do vetor é %.2f", media);
	printf("\nHá %d número(s) múltiplos de 5", multcinco);
	printf("\nHá %d número(s) maiores que 10 e menores que 30", maiormenor);
	printf("\nO maior número é %d e o menor é %d", maior, menor);
}
