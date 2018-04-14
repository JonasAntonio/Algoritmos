// Exercício 5.7
#include <stdio.h>
int main() {
	int i, vet[12];
	for(i=0;i<12;i++)
		vet[i] = 90-3*i;
	printf("Conteudo do vetor:");
	for(i=0;i<12;i++)
		printf("\n[%2d] %d",i,vet[i]);
}
