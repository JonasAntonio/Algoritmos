#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i,j,m,n,mat[SIZE][SIZE],maior=0;//na pior hipotese, o maior numero é 0.
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			mat[i][j] = rand()%1000;
			printf("%4d",mat[i][j]);
			if(mat[i][j]>maior){
				maior=mat[i][j];
				m=i;
				n=j;
			}
		}
		printf("\n");
	}
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			if(mat[i][j]==maior)
				printf("Maior: [%d] [%d] %d",m,n,maior);
}

