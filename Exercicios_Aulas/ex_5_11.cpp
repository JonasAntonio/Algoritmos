#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main() {
	srand(time(0));
	int i, vet[SIZE],menor=99;
	for(i=0;i<SIZE;i++) {
		vet[i] = rand()%100;
		if(vet[i]<menor)
		menor = vet[i];
		printf("[%2d] %d\n",i,vet[i]);
	}
	for(i=0;i<SIZE;i++)
		if(vet[i]==menor)
		printf("[%2d]Menor: %d\n",i,menor);
}
