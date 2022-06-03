// Escreva um program que solicite iterativamente um número do usuário e imprima sempre o menor valor fornecido. Crie um critério para a finalização do programa. Utilize ponteiros.

#include <stdio.h>

void ehmenor (int *, int *);

int main(void) {	
	int n, menor = 0;
	int *pv = NULL, *pr = NULL;

	pv = &n;  
	pr = &menor;
	
	do {	
		puts("Digite o número ('0' para encerrar): ");
		scanf("%d", pv);
		
		if (*pr == 0) *pr = *pv;
		if (*pv != 0 && *pv < *pr) ehmenor(pv, pr);    
		if (*pv != 0) printf("Menor número digitado: %d\n\n", *pr);    
	} while (*pv != 0);
	
	return 0;
}

void ehmenor (int *n, int *menor){	
	*menor = *n;
}
