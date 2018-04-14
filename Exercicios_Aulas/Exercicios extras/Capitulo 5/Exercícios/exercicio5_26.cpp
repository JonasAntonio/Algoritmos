// Exercício 5.26
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main() {
	srand(time(0));
	int i, j, num, mat[TAM][TAM];
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			mat[i][j]=rand()%100;
			printf("%2d ",mat[i][j]);
		}
		printf("\n");			
	}
	printf("Numero: ");
	scanf("%d",&num);
	for(i=0;i<TAM;i++)
		for(j=0;j<TAM;j++) 
			if(num==mat[i][j])
				printf("[%d][%d] %2d\n",i,j,num);		
}
