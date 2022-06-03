// Escreva um programa que concatene duas strings utilizando ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 30

void concatenarString(char *, char*);

int main() {  
	char str1[TAM], str2[TAM], *pv = NULL, *pr = NULL;
	
	pv = str1;
	pr = str2;

 	puts("Digite a primeira string: ");
	scanf("%s", pv);

	puts("Digite a segunda string: ");  
	scanf("%s", pr);

	concatenarString(pv, pr);

	printf("%s\n\n", str1);

	return 0;
}

void concatenarString(char *p, char *q){  
	int i = 0, j = 0;

	while (*(p + i) != '\0') i++;
	
	while (*(q + j) != '\0'){
    		*(p + i) = *(q + j);
		i++;
		j++;
	}
}
