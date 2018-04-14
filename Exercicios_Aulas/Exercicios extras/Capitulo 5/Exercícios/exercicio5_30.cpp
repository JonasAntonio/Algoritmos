// Exercício 5.30
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 8
int main() {
	srand(time(0));
	int i, j, mat[TAM][TAM]={}; // inicializa com zero
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			if(i<=j)
				mat[i][j]=rand()%99+1;
			printf("%2d ",mat[i][j]);
		}
		printf("\n");			
	}
}
