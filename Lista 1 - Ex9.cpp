#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	int horas, velmedia;
	float distancia, consumo;
	
 	printf("Informe o tempo gasto na viagem em horas: ");
 	scanf("%d", &horas);
 	
 	printf("Informe a velocidade média do veículo: ");
 	scanf("%d", &velmedia);
 	
 	distancia = horas * velmedia;
 	consumo = distancia / 12; //12 km por litro
 		
	printf("Foram gastos %.2f litros de combustivel\n",consumo);
}
