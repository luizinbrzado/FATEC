#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"");
	float circle;
	
	printf("Coloque um valor de raio: ");
	scanf("%f", &circle);
	
	printf("A área desse círculo é %.2f²", 3.14159265359*(circle*circle));
}
