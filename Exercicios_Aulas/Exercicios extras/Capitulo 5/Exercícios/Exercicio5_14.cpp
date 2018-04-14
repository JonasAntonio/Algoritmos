// Exercício 5.14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define TAM 15
int main() {
	srand(time(0));
	char A[TAM], B[TAM];
	int i;
	for(i=0;i<TAM;i++) {
		A[i] = rand()%26+65;
		B[i] = tolower(A[i]);
		printf("[%2d] %c %c\n",i,A[i],B[i]);
	}
}
