/*
Escrever um programa que receba vários números inteiros no teclado. E no 
final imprimir a média dos números múltiplos de 3. Para sair digitar 0
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "");
	int num, soma=0;
	float media=0, cont=0;
	
	printf("\n DIGITE UM NÚMERO INTEIRO: ");
	scanf("%d",&num);
	
		if(num%3==0 && num!=0) {
		soma=soma+num;
		cont++;
		}
	
	while(num!=0) {
		printf("\n DIGITE UM NÚMERO INTEIRO: ");
		scanf("%d",&num);
	
			if(num %3==0 && num!=0) {
			soma=soma+num;
			cont++;
			}
	}
	
	if(soma=0){
		printf("Não há números múltiplos de 3!");
	}
	else
	{
	media=soma/cont;
	printf("\n\n A media dos números é %.2f ",media);
	printf("\n\n");
	}
}
