#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));//altera a semente de randomização
	int i;
	printf("Numeros pseudo aleatorios:\n");
	for(i=0;i<10;i++)
		printf("%5d\n",rand());
}
