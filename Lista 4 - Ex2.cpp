/*
Escrever um programa que receba v�rios n�meros inteiros no teclado. E no 
final imprimir a m�dia dos n�meros m�ltiplos de 3. Para sair digitar 0
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "");
	int num, soma=0;
	float media=0, cont=0;
	
	printf("\n DIGITE UM N�MERO INTEIRO: ");
	scanf("%d",&num);
	
		if(num%3==0 && num!=0) {
		soma=soma+num;
		cont++;
		}
	
	while(num!=0) {
		printf("\n DIGITE UM N�MERO INTEIRO: ");
		scanf("%d",&num);
	
			if(num %3==0 && num!=0) {
			soma=soma+num;
			cont++;
			}
	}
	
	if(soma=0){
		printf("N�o h� n�meros m�ltiplos de 3!");
	}
	else
	{
	media=soma/cont;
	printf("\n\n A media dos n�meros � %.2f ",media);
	printf("\n\n");
	}
}
