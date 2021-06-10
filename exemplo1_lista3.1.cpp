// entrar com 5 valores e imprimir a media
// acum = acum + num;
#include<stdio.h>
main()
{
	//float num1, num2, num3, num4, num5;
	float num, cont = 0;
	int i;
	
	//for(inicio;fim(condicao);passo)
	for(i=1 ; i<6 ; i++)    // i = i+1;    i+=10   laço contado
	{
		printf("Digite o valor %d: ",i);
		scanf("%f",&num);
		
		if(num>30)
		{
			cont++;
		}
	}
	
	printf("cont = %.2f \n",cont);

}
