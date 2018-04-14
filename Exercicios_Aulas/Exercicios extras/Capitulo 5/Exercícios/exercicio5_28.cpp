// Exercício 5.28
#include <stdio.h>
#define TAM 8
int main() {
	int i, j, mat[TAM][TAM]={}; // inicializa com zero
	for(i=0;i<TAM;i++) {
		for(j=0;j<TAM;j++) {
			if(i==j)
				mat[i][j]=1;
			printf("%d ",mat[i][j]);
		}
		printf("\n");			
	}
}
