#include <stdio.h>
#include <stdlib.h>
#include <time.H>

main()
{
 int numero, maior=0, menor=0;
 int i;
 
 printf("Entre com o numero inteiro: ");
 scanf("%i", &numero);
 
 menor=numero;

 for(i=1; i<=5; i++)
 {
 printf("\nEntre com o numero inteiro: ");
 scanf("%i", &numero);

	 if(numero>maior)
	 maior=numero;
	 else
	 if(numero<menor)
	 menor=numero;
	 }


 printf("\nO menor numero entrado e: %d", menor);
 printf("\nO maior numero entrado e: %d", maior);
 }