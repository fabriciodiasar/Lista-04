// Escreva um programa que gere dois vetores (X e Y) com números pseudoaleatórios no intervalo [0,N − 1]. Crie uma matriz M com dimensões NxN que armazene as ocorrências dos elementos de X e Y.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 7
#define MX 11

void imprimirVetor(int *, int);
void imprimirMatriz (int *, int, int);
void valorY(int *, int *, int, int);

int main(){  
	int x[TAM], y[TAM], m[N][N], r;
	int *pv = NULL, *pr = NULL, *pz = NULL;
  
	pv = x;
	pr = y;
	pz = m[0];

	srand(time(0));  
	
	r = rand() % MX;
	printf("\nr = %d.\n", r);
 
	for(int i = 0; i < TAM; i++) {   
		*(pv + i) = rand() % N;    
		valorY(pv, pr, r, i);
	}

	for(int i = 0; i < N * N; i++)    
		*(pz + i) = 0;

	puts("\nVetor X:");  
	imprimirVetor(pv, TAM);
	
	puts("Vetor Y:");
	imprimirVetor(pr, TAM);

	int z;  
	for(int i = 0; i < TAM; i++){
		z = N * (*(pr + i)) + *(pv + i);
		*(pz + z) += 1; 
	}
 
	puts("Matriz:");  
	imprimirMatriz(pz, N, N);
	
	return 0;
}

void imprimirVetor(int *v, int k){  
	for(int i = 0; i < k; i++)
		printf("%d ", *(v + i));

	puts("\n");
}

void imprimirMatriz (int *m, int lin, int col) {  
	for(int i = 0; i < lin * col; i++) {
		printf("%d\t", *(m + i));
		
		if(((i + 1) % col) == 0) printf("\n");
	}
  
	puts("\n");
}

void valorY(int *pv, int *pr, int r, int i){  
	if (r <= 3)
		*(pr + i) = *(pv + i);
	else if (r > 3 && r <= 5)
		*(pr + i) = *(pv + i) - 1;
	else if (r > 5 && r <= 7)
		*(pr + i) = *(pv + i) + 1;
	else if (r > 7 && r <= 9)
		*(pr + i) = *(pv + i) - 2;
	else if (r > 9)
		*(pr + i) = *(pv + i) + 2;
}
