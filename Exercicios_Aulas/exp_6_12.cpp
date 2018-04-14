#include<stdio.h>
#include<stdlib.h>
int main() {
	char num[11];
	int val;
	int soma = 0;
	do {
		printf("Inteiro: ");
		scanf(" %10[^\n]",&num);
		val = atoi(num);
		if(val<0)
			break;
		soma+=val;
	} while(1);
		printf("Soma: %d\n",soma);
}
