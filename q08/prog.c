// Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.

#include <stdio.h>
#include <stdlib.h>

#define TAM 30

int buscaCaractere(char *, char *);

int main(){  
	char str[TAM], c, *pv = NULL, *pr = NULL;

	pv = str;
	pr = &c;

	puts("\nDigite uma string: ");
  	scanf("%[^\n]s", pv);

 	getchar();

	puts("\nQual caractere você quer buscar na string? ");
  	scanf("%c", pr);
  
  	if(buscaCaractere(pv, pr))    
		puts("\nEsse caractere existe na string!\n");
	else
		puts("\nEsse caractere NÃO existe na string!\n");
	
 	return 0;

}

int buscaCaractere(char *str, char *c) {  
	int i = 0;
  
	while (1) {  
		if (*(str + i) == *c) return 1;
    		if (*(str + i) == '\0') break;
    		i++;
	}
	
	return 0;
}
