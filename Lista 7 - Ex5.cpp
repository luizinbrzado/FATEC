// Crie uma fun��o em linguagem C chamado Dado() que retorna, atrav�s de sorteio, um n�mero de 1 at� 6.

#include <stdio.h>
#include <time.h> //necess�rio p/ fun��o time()
#include <stdlib.h>

int dado(int dado) {
	srand(time(NULL));
	return (rand()%6+1);
}

int main() {
	int num;
	num = dado(num);
	printf("%d", num);
}
