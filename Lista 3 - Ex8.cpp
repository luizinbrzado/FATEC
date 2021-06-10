/*Faça um programa que leia um número n e imprima se ele é primo ou não. 
(um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é 
primo!!!*/

#include <stdio.h>
#include <locale.h>

main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
}
