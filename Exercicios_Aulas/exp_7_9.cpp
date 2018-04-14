#include <stdio.h>
#define SIZE 10
void inicializa(int,int[]);
void imprime(int,int[]);
int main() {
	int vet[SIZE];
	inicializa(SIZE,vet);
	imprime(SIZE,vet);
	}
	void inicializa(int t,int v[]) {
		int i;
		for(i = 0; i < t; i++)
			v[i] = i;
	}
	void imprime(int t,int v[]) {
		int i;
		for(i = 0; i < t; i++)
			printf("%2d",v[i]);
		printf("\n");
	}
