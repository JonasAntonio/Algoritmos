#include <stdio.h>
#define SIZE 10
void inicializa(int[]);
void imprime(int[]);
int main() {
	int vet[SIZE];
	inicializa(vet);
	imprime(vet);
	}
	void inicializa(int v[]) {
		int i;
		for(i = 0; i < SIZE; i++)
			v[i] = i;
	}
	void imprime(int v[]) {
		int i;
		for(i = 0; i < SIZE; i++)
			printf("%2d",v[i]);
		printf("\n");
	}
