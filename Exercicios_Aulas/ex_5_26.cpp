#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i,j,mat[SIZE][SIZE],num;
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			mat[i][j] = rand()%100;
			printf("%2d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Numero: ");
	scanf("%d",&num);
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			if(num==mat[i][j])
				printf("[%d][%d] %2d\n",i,j,num);
}

