#include <stdio.h>
int main() {
	int i, vet[10];
	for(i=0;i<10;i++) {
		printf("[%2d] ",i);
		scanf("%d",&vet[i]);
	}
	printf("\nConteudo do vetor:\n");
	for(i=0;i<10;i++)
		printf("%d ",vet[i]);
		printf("\n");
}
