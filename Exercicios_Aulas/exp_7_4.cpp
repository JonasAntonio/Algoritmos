#include <stdio.h>
void linha(void); // Protótipo da função.
int main() {
	linha(); // Invocação da Função
	printf("CENTRO DE ENSINO SUPERIOR DE JUIZ DE FORA\n");
	linha();
}
void linha(void) { // Declaração da função.
	int i;
	for(i=0;i<80;i++)
		printf("*");
}
