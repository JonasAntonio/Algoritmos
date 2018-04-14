#include<stdio.h>
int main() {
	int i;
	float vet[8];
	for(i=0;i<8;i++) {
		scanf("%f",&vet[i]); //sempre usar o indice entre []!!!
	}
	printf("\nConteudo do vetor:\n");
	for(i=0;i<8;i++)
		printf("%.2f \n",vet[i]);

}
