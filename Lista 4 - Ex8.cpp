/*
8 - Solicitar um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente, 
mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se 
digitar correto mostrar o n�mero digitado
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num=0;
	
	printf("Coloque um n�mero entre 1 e 4: ");
	scanf("%d", &num);
	
		if(num>=1 && num<=4)
		printf("\n%d foi o n�mero escolhido", num);
		else
		while(num<1 || num>4) {
		printf("Coloque um n�mero entre 1 e 4: ");
		scanf("%d", &num);
		
		if(num>=1 && num<=4)
		printf("\n%d foi o n�mero escolhido", num);
		}
}
