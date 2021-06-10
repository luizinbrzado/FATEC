/*7 - Faça um programa que receba a idade e o peso de 7 pessoas, calcule e 
mostre:
• A quantidade de pessoas com mais de 90 quilos;
• A média das idades das 7 pessoas.
• A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
• A porcentagem de pessoas com idade entre 10 e 30 anos.*/

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, peso, idade, q90=0, maiorabaixo=0;
	float perc, medidade=0;
	
	for(i=1; i<=7; i++)
	{
	printf("Coloque o peso da %dº pessoa: ", i);
	scanf("%d",&peso);
	
	printf("Coloque a idade: ", i);
	scanf("%d",&idade);
	
	if(peso>90)
	q90 = q90 + 1;
	
	medidade = medidade + idade;
	
	if(idade>=18 && peso<60)
	maiorabaixo = maiorabaixo + 1;
	
	if(idade>=10 && idade<=30)
	perc = perc + 1;
	}
	
	// RESULTADOS
	printf("Possui %d pessoa(as) com mais de 90 quilos.", q90);
	
	printf("\nA média das idades das 7 pessoas é %.2f.", medidade/(i-1));
	
	printf("\nHá %d pessoas maiores de idade e abaixo de 60 quilos.", maiorabaixo);
	
	printf("\nHá %.2f de pessoas com idade entre 10 e 30 anos.", perc/(i-1)*100);
}
