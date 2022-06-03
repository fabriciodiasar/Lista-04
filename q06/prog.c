// Escreva um programa que copie uma string para outra usando ponteiros.

#include <stdio.h>
#include <stdlib.h>

#define TAM 30

void copiaString(char *, char *);

int main(){  
	char str1[TAM], str2[TAM], *pv = NULL, *pr = NULL;

	pv = str1;  
	pr = str2;
	
	puts("\nDigite a string:");
	scanf("%s", pv);

	copiaString(pv, pr);
	
	printf("\nString 1 = %s\n", str1);
	printf("String 2 = %s\n\n", str2);

	return 0;
}

void copiaString(char *str1, char *str2){    
	int i = 0;
  
	while (*(str1 + i) != '\0'){      
		*(str2 + i) = *(str1 + i);
		i++;
	}
}
