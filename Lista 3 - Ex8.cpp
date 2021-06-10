/*Fa�a um programa que leia um n�mero n e imprima se ele � primo ou n�o. 
(um n�mero primo tem apenas 2 divisores: 1 e ele mesmo! O n�mero 1 n�o � 
primo!!!*/

#include <stdio.h>
#include <locale.h>

main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);
}
