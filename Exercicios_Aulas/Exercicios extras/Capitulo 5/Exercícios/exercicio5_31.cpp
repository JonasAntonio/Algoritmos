// Exercício 5.31
// Exercício 5.30
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int i, j, vet[5]={}, mat[5][10];
	for(i=0;i<5;i++) {
		for(j=0;j<10;j++) {
			mat[i][j]=rand()%10;
			printf("%d ",mat[i][j]);
			vet[i]+=mat[i][j];
		}
		printf("-> %2d\n",vet[i]);			
	}
}
