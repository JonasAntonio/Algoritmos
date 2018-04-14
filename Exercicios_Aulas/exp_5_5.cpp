#include <stdio.h>
#define SIZE 10
int main() {
	int i, vet[SIZE] = {2, 5, 7, 9, 0, -1, 6, 8, -2, 4};
	printf("Conteudo do vetor:");
	for(i=0;i<SIZE;i++)
		printf("\n[%2d] %2d",i,vet[i]);
}
