#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
void inicializa(int,char[]);
int contaVogais(int,char[]);
int main() {
	char vet[SIZE];
	int vogal;
	inicializa(SIZE,vet);
	vogal = contaVogais(SIZE,vet);
	printf("Vogais: %d",vogal);
	}
	void inicializa(int t,char v[]) {
		srand(time(0));
		int i;
		for(i = 0; i < t; i++)
			v[i] = rand()%26+65;
	}
	int contaVogais(int t,char v[]) {
		int i,vog=0;
		for(i = 0; i < t; i++)
			if(v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U')
				vog++;
		return vog;
	}
