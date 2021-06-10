/*Crie um aplicativo de convers�o entre as temperaturas Celsius e Farenheit.
Primeiro o usu�rio deve escolher se vai entrar com a temperatura em C�lsius ou Farenheit, 
depois a convers�o escolhida � realizada atrav�s de um comando SWITCH.
Se C � a temperatura em C�lsius e F em farenheit, as f�rmulas de convers�o s�o:
C= 5.(F-32)/9
F= (9.C/5) + 32*/

#include <stdio.h>
#include <time.h> //necess�rio p/ fun��o time()
#include <stdlib.h>

float conversaocf(float c)
{
	return (9 * c / 5) + 32;
}

float conversaofc(float f)
{
	return (f - 32)*5.0/9.0;
	
}

int main(){
	
	int escolha;  
	float c, f;	
	
	printf("Qual escala quer converter:\n");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n");
	scanf("%d", &escolha);
	
	printf("\n");
	
	switch (escolha) {
		case 1:
			printf("Digite a temperatura em Celsius (use ponto para casas decimais): ");
			scanf("%f", &c);
			
			printf("Fahrenheit: %.2f\n", conversaocf(c));
			break;
		
		case 2:
			printf("Digite temperatura em Fahrenheit (use ponto para casas decimais):\n");
			scanf("%f",&f);		  
			
			printf("Celsius: %.2f\n", conversaofc(f));
			break;
		default:
			printf("Opcao invalida!!!");
			break;
	}
}