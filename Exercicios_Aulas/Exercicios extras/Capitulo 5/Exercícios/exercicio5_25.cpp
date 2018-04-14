// Exercício 5.25
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main() {
	srand(time(0));
	int mat[TAM][TAM]; // declara a matriz 5x10
	int i, j, maior=0; // pior hipótese!
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			mat[i][j]=rand()%1000;
			printf("%3d ",mat[i][j]);
			if(mat[i][j]>maior) {
				maior=mat[i][j];
			}
		}
		printf("\n");
	}
	for(i=0;i<TAM;i++)
		for(j=0;j<TAM;j++)
			if(mat[i][j]==maior)
				printf("Maior: [%d][%d] %d\n",i,j,maior);
}
