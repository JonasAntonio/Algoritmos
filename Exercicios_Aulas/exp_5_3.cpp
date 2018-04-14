#include <stdio.h>
int main() {
	int i, vet[10];
	for(i=0;i<10;i++)
		vet[i] = i;
	printf("Conteudo do vetor:");
	for(i=0;i<10;i++)
		printf("\n[%2d] %2d",i,vet[i]);
}
