#include <stdio.h>
int main() {
	int i; /* vari´avel de controle*/
	int soma = 0;// sempre inicializar a soma.
	for(i=1; i<=100; i++)
		soma += i;
	printf("Soma: %d",soma);
}
