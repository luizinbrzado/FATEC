#include<stdio.h>
#include<locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese");
	char type;
	float consumo, km;
	
	printf("Informe o tipo de carro: \n");
	printf("A - Tipo A \n");
	printf("B - Tipo B \n");
	printf("C - Tipo C \n");
	scanf("%c",&type);
	
	printf("Digite o percurso rodado em km: \n");
	scanf("%f", &km);
	
	switch(type)
	{
		case 'A':
			consumo = km/8;
		break;
		
		case 'B':
			consumo = km/9;
		break;
		
		case 'C':
			consumo = km/12;
		break;
		
		default:
			printf("Digite um carro válido!");
	}

	if(type!=type)
	{
	printf("O consumo é de: %.2f litros", consumo);
	}
}
