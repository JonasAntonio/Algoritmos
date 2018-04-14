// Exercício 5.27
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
int main() {
	srand(time(0));
	int i, j, A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
	printf("Matriz A\n");
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			A[i][j]=rand()%10;
			printf("%2d ",A[i][j]);
		}
		printf("\n");			
	}
	printf("Matriz B\n");
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			B[i][j]=rand()%10;
			printf("%2d ",B[i][j]);
		}
		printf("\n");			
	}
	printf("Matriz C=A+B\n");
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			C[i][j]=A[i][j]+B[i][j];
			printf("%2d ",C[i][j]);
		}
		printf("\n");			
	}
}
