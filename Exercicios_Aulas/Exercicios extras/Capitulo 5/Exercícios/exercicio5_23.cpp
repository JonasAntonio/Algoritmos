// Exercício 5.23
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 8
int main() {
	srand(time(0));
	float mat[TAM][TAM];
	int i, j;
	for(i=0;i<TAM;i++) { // percorre linhas da matriz
		for(j=0;j<TAM;j++) { // percorre colunas da matriz
			mat[i][j]=rand()%100/10.; // lembre-se do ponto
			printf("%.1f ",mat[i][j]);
		}
		printf("\n"); // pular de linha 
	}
}
