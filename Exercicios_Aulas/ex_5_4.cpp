#include<stdio.h>
int main() {
	int i, vet[15];
	for(i=0;i<15;i++)
		vet[i] = i+10;//somar 10 ao valor do indice
	printf("Conteudo do vetor:");
	for(i=0;i<15;i++)
		printf("\n[%2d] %2d",i,vet[i]);
}
