#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 20
int main () {
	srand(time(0));
	int i,vet[size],si=0;
	for(i=0;i<size;i++){
		vet[i] = rand()%100;
		printf("[%2d] %2d\n",i,vet[i]);
	if(vet[i]%2)
		si++;	
	}
	printf("Impar: %d\nPar..: %d",si,size-si);
}
