// Exercício 5.24
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int mat[5][10]; // declara a matriz 5x10
	int i, j, soma=0;
	for(i=0;i<5;i++) {
		for(j=0;j<10;j++) {
			mat[i][j]=rand()%10;
			soma+=mat[i][j];
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Soma: %d",soma);
}
