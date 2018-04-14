#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 50
int main () {
	srand(time(0));
	int i,soma=0,vet[size];
	for(i=0;i<size;i++){
		vet[i] = rand()%10;
		soma+=vet[i];
		printf("%d ",vet[i]);
	}
	printf("\nSoma: %d",soma);
}
