/*
4 - Fa�a um programa que leia as m�dias finais de v�rios alunos de uma turma 
e mostre a maior m�dia, a menor m�dia e a m�dia aritm�tica da turma. O 
programa para quando encontrar uma m�dia negativa.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num, medmaior, medmenor, medturma, cont, acum;
	
	printf("M�dia do 1� aluno: ");
	scanf("%d", &num);
	
	cont++;
	medmaior = num;
	medmenor = num;
	medturma = num/cont;
	acum = acum + num;
	
	while(num>=0) {
		cont++;
		
		printf("M�dia do %d� aluno: ", cont);
		scanf("%d", &num);
		
			if(num>medmaior) {
			medmaior = num;	
			}
			if(num<medmenor && num>0) {
			medmenor = num;
			}
			if(num>0)
			acum = acum + num;
	}
	cont--;
	medturma = acum/cont;
	
	printf("\nMaior m�dia � %d", medmaior);
	printf("\nMenor m�dia � %d", medmenor);
	printf("\nM�dia da turma � %d", medturma);
}
