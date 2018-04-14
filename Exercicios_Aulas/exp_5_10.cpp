#include <stdio.h>
#define SIZE 3
int main() {
	int i, j, mat[SIZE][SIZE] = {{1, 4, 4},{5, 7, 9},{8, 2, 3}};
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++)
		printf("%4d",mat[i][j]);
		printf("\n");
	}
}
