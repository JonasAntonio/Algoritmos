#include <stdio.h>
#include "fatorial.h"
int fatrec(int);
int main() {
	int num;
	int fat;
	printf("Numero inteiro nao-negativo: ");
	scanf("%d",&num);
	fat = fatrec(num);
	printf("Fatorial: %d\n",fat);
}
