#include <stdio.h>
#define SIZE 10
int main() {
	int i, vet[SIZE];
	for(i=0;i<SIZE;i++)
		vet[i] = i;
	printf("Conteudo do vetor:");
	for(i=0;i<SIZE;i++)
		printf("\n[%2d] %2d",i,vet[i]);
}
