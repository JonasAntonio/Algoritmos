// Exercício 7.8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void inicializa(int,int,int,int[]);
float calcMedia(int,int[]);
int main() {
	int a, b, vet[SIZE];
	float media;
	printf("Limites: ");
	scanf("%d%d",&a,&b);
	inicializa(SIZE,a,b,vet);
	media = calcMedia(SIZE,vet);
	printf("Media: %.2f",media);
}
void inicializa(int t, int a, int b, int v[]) {
	srand(time(0));
	int i;
	for(i=0;i<t;i++)
		v[i]=rand()%(b-a+1)+a;
}
float calcMedia(int t,int v[]) {
	int i;
	float m=0; // inicializa a variável de somatório
	for(i=0;i<t;i++)
		m+=v[i]; // soma todos os elementos do vetor
	return m/t; // retorna a média
}
