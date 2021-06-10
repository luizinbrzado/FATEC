#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"");
	
	int i, num[5];
	
	for(i=0; i<5; i++) {
		printf("vetor[%d]: ", i);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<5; i++) {
		if(num[i] % 2 == 0) {
			printf("\nvetor[%d] = %d <- par", i, num[i]);
		}
		else {
		printf("\nvetor[%d] = %d <- ímpar", i, num[i]);
		}
	}
}
