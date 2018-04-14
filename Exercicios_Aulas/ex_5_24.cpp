#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE1 5
#define SIZE2 10
int main() {
	srand(time(0));
	int i,j,mat[SIZE1][SIZE2],soma=0;
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE1;i++) {
		for(j=0;j<SIZE2;j++) {
			mat[i][j] = rand()%10;
			soma+=mat[i][j];
			printf("%2d",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n Soma: %2d",soma);
}

