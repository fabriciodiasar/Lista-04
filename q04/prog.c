// Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste o vetor com tipos de dados diferentes, analise os endereços. O que você observou?

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void testeInt(int *, int );
void testeChar(char *, int );
void testeFloat(float *, int );

int main(void) {
	int v[TAM], *p = NULL;
	char s[TAM], *q = NULL;
	float f[TAM], *r = NULL;

	p = v;  
	q = s;
	r = f;

	puts("\n===== Teste com Int =====");  
	testeInt(p, TAM);

	puts("\n\n===== Teste com Char =====");  
	testeChar(q, TAM);
	
	puts("\n\n===== Teste com Float =====");
  	testeFloat(r, TAM);
  
	puts("\n\n===== CONCLUSÃO =====");
	puts("\n\nA diferença entre os endereços de cada número é é igual ao número de bytes ocupados por uma variável (variando pelo tipo.)\n");
  
	return 0;
}

void testeInt(int *p, int t) {
	printf("\nSize of int = %ld.\n\n", sizeof(int));
  
	for (int i = 0; i < t; i++) {  
		printf("%d° termo: ", i+1);
		scanf("%d", (p + i));
	}
	for (int i = 0; i < t; i++)   
		printf("\n[%p] = %d.", (p + i), *(p + i));
}

void testeChar(char *q, int t){
	printf("\nSize of char = %ld.\n\n", sizeof(char));
  
	for (int i = 0; i < t; i++) {
    		printf("%d° termo: ", i+1);
    		scanf(" %c", (q + i));
	  
		getchar();
	}

	for (int i = 0; i < t; i++)    
		printf("\n[%p] = %c.", (q + i), *(q + i));  
}

void testeFloat(float *r, int t){  
	printf("\nSize of float = %ld.\n\n", sizeof(float));
  
	for (int i = 0; i < t; i++) {
    		printf("%d° termo: ", i+1);
    		scanf("%f", (r + i));
	}

	for (int i = 0; i < t; i++)    
		printf("\n[%p] = %.2f.", (r + i), *(r + i));
}
