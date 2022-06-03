// Escreva um programa que troque o valor de dois número utilizando ponteiros.

#include <stdio.h>

void troca(int *a, int *b);

int main() {
	int a, b;
  
	int *pv = NULL, *pr = NULL;

	pv = &a;  
	pr = &b;

	puts("\nDigite o primeiro valor: ");
	scanf("%d", pv);

	puts("\nDigite o segundo valor: ");
	scanf("%d", pr);

	printf("\nPrimeiro valor = %d\n", a);
	printf("Segundo valor = %d\n", b);

	troca(pv, pr);

	printf("\nPrimeiro valor = %d\n", a);
	printf("Segundo valor = %d\n\n", b);

	return 0;
}

void troca(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
