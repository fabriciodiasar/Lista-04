// Implemente o método de ordenação bolha utilizando ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 50
#define TAM 30

void imprimirVetor(int *, int);
void troca(int *, int *);

int main(){
 	int v[TAM], *pv = NULL;

	pv = v;
	
	srand(time(0));
	for(int i = 0; i < TAM; i++)
		*(pv + i) = rand() % MX;

	puts("Vetor não ordenado:");
  	imprimirVetor(v, TAM);

  	for(int i = 0; i < TAM; i++)
    		for(int j = 0; j < TAM - i - 1; j++)
      			if(*(v + j) > *(v + j + 1))
       				troca(v + j, v + j + 1);

	puts("Vetor ordenado:");  
	imprimirVetor(v, TAM);  
  
	return 0;
}

void troca(int *a, int *b){	
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void imprimirVetor(int *v, int k){  
	for(int i = 0; i < k; i++)
		printf("%d ", *(v + i));

	puts("\n");
}
