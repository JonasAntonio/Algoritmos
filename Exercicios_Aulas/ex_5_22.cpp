#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i;
	int j;
	char ch[SIZE][SIZE];
	printf("Conteudo da matriz:\n");
	for(i=0;i<SIZE;i++) {//percorre linhas da matriz
		for(j=0;j<SIZE;j++) {//percorre colunas a matriz
			ch[i][j] = rand()%26+65;
			printf("%c ",ch[i][j]);
		}
		printf("\n");
		}
}

