// entrar com 5 valores e imprimir a media
// acum = acum + num;
#include<stdio.h>
main()
{
	//float num1, num2, num3, num4, num5;
	float num, acum = 0;
	int i;
	
	//for(inicio;fim(condicao);passo)
	for(i=1 ; i<6 ; i++)    // i = i+1;    i+=10   laço contado
	{
		printf("Digite o valor %d: ",i);
		scanf("%f",&num);
		
		acum = acum + num;
		
		printf("acum = %.2f \n",acum);
	}
	
	printf("media = %.2f \n",acum/5);

}
