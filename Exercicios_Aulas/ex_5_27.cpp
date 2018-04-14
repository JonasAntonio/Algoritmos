#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
int main() {
	srand(time(0));
	int i,j,a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],num;
	printf("Conteudo da matriz A:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			a[i][j] = rand()%10;
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Conteudo da matriz B:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			b[i][j] = rand()%10;
			printf("%2d ",b[i][j]);
		}
		printf("\n");
	}
	printf("Conteudo da matriz C=A+B:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			c[i][j] = a[i][j]+b[i][j];
			printf("%2d ",c[i][j]);
		}
		printf("\n");
	}
}
