// Exercício 5.29
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 8
int main() {
	srand(time(0));
	int i, j, mat[TAM][TAM]={}; // inicializa com zero
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			if((i+j)==(TAM-1))
				mat[i][j]=rand()%10;
			printf("%d ",mat[i][j]);
		}
		printf("\n");			
	}
}
