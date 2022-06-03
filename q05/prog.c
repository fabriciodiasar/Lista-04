// Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.

#include <stdio.h>
#include <stdlib.h>

#define TAM 30

void tamanhoString(char *, int *);

int main () {  
	char v[TAM], *pv = NULL;
	int  tam = 0, *pr = NULL;

	pv = v;
  	pr = &tam;
    
  	puts("Digite uma string: ");
	scanf("%[^\n]s", pv);
	
	tamanhoString(pv, pr);

	printf("\nTamanho da string = %d.\n\n", tam);
	
	return 0;
}

void tamanhoString(char *v, int *tam){  
	while (*(v + *tam) != '\0')
		(*tam)++;
}
