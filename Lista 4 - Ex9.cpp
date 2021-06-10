/*
9 - Faça um programa que receba a idade e o peso de pessoas, calcule e mostre:
• A quantidade de pessoas com mais de 90 quilos;
• A média das idades das 7 pessoas.
• A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
• A porcentagem de pessoas com idade entre 10 e 30 anos.
Obs: O programa encerra quando digitado uma idade negativa.
*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "");
	int idade=0, peso=0, maior90=0, ab60=0, acum=0, cont=0, contwhile=2;
	float medtotal, entre1030=0;
	
	printf("Coloque a idade da 1º pessoa: ");
	scanf("%d", &idade);
	
	printf("Coloque o peso: ");
	scanf("%d", &peso);
	
	acum = acum + idade;
	
		if(idade>=18 && peso<60) {
			ab60++;
		}
	
		if(idade>10 && idade<30) {
			entre1030++;
			
		}
	
		if(peso>=90) {
			maior90++;
		}
		
		cont++;
	
		while(idade>0) {
		printf("Coloque a idade da %dº pessoa: ", contwhile);
		scanf("%d", &idade);
		
			if(idade<0) {
			break;
			}
		
		printf("Coloque o peso: ");
		scanf("%d", &peso);
		
		acum = acum + idade;
		
			if(idade>=18 && peso<60) {
				ab60++;
			}
		
			if(idade>=10 && idade<=30) {
				entre1030++;
				
			}
		
			if(peso>=90) {
				maior90++;
			}
			cont++;
			contwhile++;
		}
	
	medtotal = acum/cont;
	entre1030 = entre1030/cont*100;
	
		if(maior90!=0) {
		printf("\nHá %d pessoa com mais de 90 quilos!", maior90);
		}
		else{
		
		printf("\nNão há pessoas com mais de 90 quilos!");
		}
		
	printf("\nA média de idade das %d pessoas é %.2f anos!", cont, medtotal);
	
		if(entre1030!=0) {
		printf("\n%.2f%% possuem entre 10 a 30 anos!", entre1030);
		}
		else {
			printf("\nNão há pessoas entre 10 e 30 anos!");
		}
		
		if(ab60>0) {
		printf("\nHá %d maior(es) de idade e com menos de 60 quilos!", ab60);
		}
		else {
			printf("\nNão há pessoas maiores de idade e com menos de 60 quilos!");
		}
}
