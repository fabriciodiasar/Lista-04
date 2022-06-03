// Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima também o endereço de memória onde o valor resultante dessa soma está armazenado.

#include <stdio.h>

void soma(int *, int *, int *);

int main(){
	int a, b, s;
  
	int *pv = NULL, *pr = NULL, *pz = NULL;

	pv = &a;  
	pr = &b;
	pz = &s;

	puts("\nDigite o primeiro valor: ");
	scanf("%d", pv);

	puts("\nDigite o segundo valor: ");	
	scanf("%d", pr);
	
	soma(pv, pr, pz);
	
	printf("\n[%p] == %d", pv, *pv);	
	printf("\n[%p] == %d", pr, *pr);
	printf("\n[%p] == %d\n\n", pz, *pz);

	return 0;
}

void soma(int *a, int *b, int *soma){
  	*soma = *a + *b;
}
