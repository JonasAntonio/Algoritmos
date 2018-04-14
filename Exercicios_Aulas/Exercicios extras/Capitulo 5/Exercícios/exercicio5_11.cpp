// Exercício 5.11
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20
int main() {
	srand(time(0)); // semente de randomização
	int i, menor=99, vet[TAM];
	printf("Conteudo do vetor:");
	for(i=0;i<TAM;i++) {
		vet[i] = rand()%100;
		if(vet[i]<menor)
			menor = vet[i];
		printf("\n[%2d] %d",i,vet[i]);
	}
	for(i=0;i<TAM;i++)
		if(vet[i]==menor)
			printf("\nMenor: [%2d] %d",i,menor);
}
