/*
8 - Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente, 
mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se 
digitar correto mostrar o número digitado
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num=0;
	
	printf("Coloque um número entre 1 e 4: ");
	scanf("%d", &num);
	
		if(num>=1 && num<=4)
		printf("\n%d foi o número escolhido", num);
		else
		while(num<1 || num>4) {
		printf("Coloque um número entre 1 e 4: ");
		scanf("%d", &num);
		
		if(num>=1 && num<=4)
		printf("\n%d foi o número escolhido", num);
		}
}
