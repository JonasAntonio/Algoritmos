#include <stdio.h>
void linha(void); // Prot�tipo da fun��o.
int main() {
	linha(); // Invoca��o da Fun��o
	printf("CENTRO DE ENSINO SUPERIOR DE JUIZ DE FORA\n");
	linha();
}
void linha(void) { // Declara��o da fun��o.
	int i;
	for(i=0;i<80;i++)
		printf("*");
}
