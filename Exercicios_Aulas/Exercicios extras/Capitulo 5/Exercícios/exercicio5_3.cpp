// Exercício 5.3
#include <stdio.h>
int main() {
	int i, vet[10];
	for(i=0;i<10;i++) {
		printf("[%d] ",i);
		do {
			scanf("%d",&vet[i]);
		} while(vet[i]<1 || vet[i]>10);
	}
	printf("Conteudo do vetor\n");
	for(i=0;i<10;i++)
		printf("[%d] %d\n",i,vet[i]);
}
