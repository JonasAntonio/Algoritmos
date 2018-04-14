// Exercício 5.22
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main() {
	srand(time(0));
	char ch[TAM][TAM];
	int i, j;
	for(i=0;i<TAM;i++) { // percorre linhas da matriz
		for(j=0;j<TAM;j++) { // percorre colunas da matriz
			ch[i][j]=rand()%26+65;
			printf("%c ",ch[i][j]);
		}
		printf("\n"); // pular de linha 
	}
}
