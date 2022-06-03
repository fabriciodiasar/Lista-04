// Escreva um programa que gere um vetor X com números pseudoaleatórios no intervalo [0,N − 1]. Crie um vetor F com N posições e armazene em cada posição de F a quantidade de ocorrências dos elementos de X.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 7

void imprimirVetor(int *, int);

int main(){  
	int x[TAM], f[N], *pv = NULL, *pr = NULL, count;

	pv = x;  
	pr = f;
	
	srand(time(0));
  	for(int i = 0; i < TAM; i++)
		*(pv + i) = rand() % N;
	
	puts("\nVetor X:");
	imprimirVetor(pv, TAM);

	for(int i = 0; i < N; i++){    
		count = 0;
    
		for(int j = 0; j < TAM; j++){
			if (*(pv + j) == i)
        			count += 1;
		}
    
		*(pr + i) = count;
	}

	puts("Vetor F:");  
	imprimirVetor(pr, N);
  
	return 0;
}

void imprimirVetor(int *v, int k){  
	for(int i = 0; i < k; i++)
		printf("%d ", *(v + i));

	puts("\n");
}
