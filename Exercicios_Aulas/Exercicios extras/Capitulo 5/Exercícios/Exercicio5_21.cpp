// Exercício 5.21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 6
int main() {
	srand(time(0));
	int dado[TAM]={}, i;
	for(i=0;i<1000;i++) {
		dado[rand()%TAM]++;
	}
	for(i=0;i<TAM;i++)
		printf("[%d] %3d\n",i+1,dado[i]);
}
