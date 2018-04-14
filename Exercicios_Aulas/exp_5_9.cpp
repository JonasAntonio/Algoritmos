#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
int main() {
	srand(time(0));
	int i; // ´indice para linhas
	int j; // ´indice para colunas
	int mat[SIZE][SIZE];
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			mat[i][j] = rand()%10;
			printf("%4d",mat[i][j]);
		}
		printf("\n");
		}
}

