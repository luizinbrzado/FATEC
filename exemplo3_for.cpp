// entrar com 5 valores e imprima a quantidade de valores pares e impares
// acum = acum + num;
#include<stdio.h>
main()
{
	//float num1, num2, num3, num4, num5;
	int num;
	int i, cont_par =0, cont_impar=0;
	
	//for(inicio;fim(condicao);passo)
	for(i=1 ; i<6 ; i++)    // i = i+1;    i+=10   laço contado
	{
		printf("Digite o valor %d: ",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			cont_par++;   // cont_par = cont_par + 1;
		}
		else
		{
			cont_impar++;
		}
	
	}
	
	printf("Quantidade de pares =  %d: \n",cont_par);
	printf("Quantidade de impares =  %d: ",cont_impar);

}
