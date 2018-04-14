#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main() {
	srand(time(0));
	int i, vet[SIZE];
	printf("Conteudo do vetor:");
	for(i=0;i<SIZE;i++) {
		vet[i] = rand()%10;
		printf("\n[%2d] %6d",i,vet[i]);
	}
}
