// Exercício 5.13
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 20
int main() {
	srand(time(0));
	int A[TAM], B[TAM], C[TAM], i;
	printf(" A   B    C\n");
	for(i=0;i<TAM;i++) {
		A[i] = rand()%100;
		B[i] = rand()%100;
		C[i] = A[i]+B[i];
		printf("%2d  %2d  %3d\n",A[i],B[i],C[i]);
	}
}
