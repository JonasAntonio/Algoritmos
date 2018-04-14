#include<stdio.h>
#include<stdlib.h>
int main() {
	char num[16];
	double val, soma = 0;
	do {
		printf("Numero: ");
		scanf(" %15[^\n]",&num);
		val = atof(num); //converte para float
		if(val<0) //flag
			break;
		soma+=val;
	} while(1); //laço sempre verdadeiro
		printf("Soma: %.2f\n",soma);
}
