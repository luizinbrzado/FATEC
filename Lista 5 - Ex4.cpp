/*4 - Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos n�meros 
s�o maior que 30, Somar estes n�meros.*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, vetor[5], soma=0, maiores=0;
	
	for(i=0; i<5; i++) {
		printf("Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i]>30) {
			soma = soma + vetor[i];
		}
	}
	
	if(soma!=0) {
		printf("\nA soma dos n�meros maiores que 30 � %d! ", soma);
		printf("\nOs n�meros maiores que 30 s�o:");
	
	
		for(i=0; i<5; i++) {
			if(vetor[i]>30 ) {
			maiores++;
			printf("\nvetor[%d] = %d", i, vetor[i]);
			}
		}
		printf("\nH� %d n�meros maiores que 30!", maiores);
	}
	
	else {
		printf("\nN�o h� n�meros maiores que 30!");
	}	
}
