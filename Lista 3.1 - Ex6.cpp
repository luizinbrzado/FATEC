/*Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima 
todos os n�meros pares no intervalo aberto e seu somat�rio. Suponha que os dados 
digitados s�o para um intervalo crescente, ou seja, o primeiro valor � menor que o 
segundo*/

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "");
	int i, maior, menor, acum;
	
	printf("Menor valor: ");
	scanf("%d", &menor);
	
	printf("Maior valor: ");
	scanf("%d", &maior);
	
	if(menor%2==0) {
		for(i=menor; i<=maior; i+=2) {
			printf("\n%d", i);
			
			acum = acum + i;
		}
	}
	else {
		for(i=menor; i<=maior; i+=2) {
			printf("\n%d", i+1);
			
			acum = acum + i+1;
		}
	}
	
	printf("\nO somat�rio dos valores pares do intervalo � %d", acum);
}
