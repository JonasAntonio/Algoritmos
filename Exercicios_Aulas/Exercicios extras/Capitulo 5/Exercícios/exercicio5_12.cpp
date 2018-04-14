// Exercício 5.12
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50
int main() {
	srand(time(0)); // semente de randomização
	int i, soma=0, vet[TAM];
	printf("Conteudo do vetor:");
	for(i=0;i<TAM;i++) {
		vet[i] = rand()%10;
		soma+=vet[i];
		printf("\n[%2d] %d",i,vet[i]);
	}
	printf("\nSoma: %d",soma);
}
