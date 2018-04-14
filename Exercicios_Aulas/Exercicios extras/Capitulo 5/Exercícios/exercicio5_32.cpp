// Exercício 5.32
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 8
int main() {
	srand(time(0));
	int i, j, aux, mat[TAM][TAM];
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			mat[i][j]=rand()%100;
			printf("%2d ",mat[i][j]);
		}
		printf("\n");			
	}
	printf("\nTransposta\n");
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			if(i>j) 	{
				aux=mat[i][j];
				mat[i][j]=mat[j][i];
				mat[j][i]=aux;
			}
			printf("%2d ",mat[i][j]);
		}
		printf("\n");			
	}
}
