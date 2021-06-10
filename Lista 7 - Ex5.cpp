// Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

#include <stdio.h>
#include <time.h> //necessário p/ função time()
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
