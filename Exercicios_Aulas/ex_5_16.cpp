#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
int main () {
	srand(time(0));
	int i,a[size], b[size],c[2*size];
	printf("Vetor A:\n");
	for(i=0;i<size;i++){
		a[i] = rand()%100;
		printf("%2d ",a[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<size;i++){
		b[i] = rand()%100;
		printf("%2d ",b[i]);
	}
	for(i=0;i<size;i++){
		c[i] = a[i];
		c[size+i] = b[i];
	}
	printf("\nVetor C:\n");
	for(i=0;i<2*size;i++)
		printf("%2d ",c[i]);
	
}
