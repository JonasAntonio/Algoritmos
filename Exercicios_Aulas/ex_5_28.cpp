#include <stdio.h>
#define SIZE 8
int main() {
	int i,j,mat[SIZE][SIZE]={}; // {} => todos os elementos da matriz inicializam em 0
	for(i=0;i<SIZE;i++) {
		for(j=0;j<SIZE;j++) {
			if(i==j)
				mat[i][j]=1;
				printf("%2d ",mat[i][j]);
		}
		printf("\n");
	}
	
}
