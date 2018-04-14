#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int i;
	char letra;
	for(i=0;i<10;i++) {
		letra = rand()%26+65;//resto da divisao por 26 somando 65.
		printf("%d (%c)\n",letra,letra);
	}
}
