/*
4 - Faça um programa que leia as médias finais de vários alunos de uma turma 
e mostre a maior média, a menor média e a média aritmética da turma. O 
programa para quando encontrar uma média negativa.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int num, medmaior, medmenor, medturma, cont, acum;
	
	printf("Média do 1º aluno: ");
	scanf("%d", &num);
	
	cont++;
	medmaior = num;
	medmenor = num;
	medturma = num/cont;
	acum = acum + num;
	
	while(num>=0) {
		cont++;
		
		printf("Média do %dº aluno: ", cont);
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
	
	printf("\nMaior média é %d", medmaior);
	printf("\nMenor média é %d", medmenor);
	printf("\nMédia da turma é %d", medturma);
}
