// Exercício 5.16
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main() {
	srand(time(0));
	int A[TAM], B[TAM], C[2*TAM], i;
	printf("Vetor A:\n");
	for(i=0;i<TAM;i++) {
		A[i] = rand()%100;
		printf("%2d ",A[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<TAM;i++) {
		B[i] = rand()%100;
		printf("%2d ",B[i]);
	}
	for(i=0;i<TAM;i++) {
		C[i] = A[i];
		C[TAM+i] = B[i];
	}
	printf("\nVetor C:\n");
	for(i=0;i<2*TAM;i++) 
		printf("%2d ",C[i]);
}
