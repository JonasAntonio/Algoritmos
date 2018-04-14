// Exercício 5.15
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20
int main() {
	srand(time(0));
	int vet[TAM], i, impar=0;
	for(i=0;i<TAM;i++) {
		vet[i] = rand()%100;
		printf("[%2d] %2d\n",i,vet[i]);
		if(vet[i]%2)
			impar++;
	}
	printf("Impar: %d\nPar..: %d",impar,TAM-impar);
}
