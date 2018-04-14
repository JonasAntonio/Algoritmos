#include <stdio.h>
int main() {
	char palavra[10];
	printf("Digite uma palavra (maximo de 9 caracteres): ");
	scanf(" %9[^\n]",&palavra);
	printf("Palavra digitada: %s\n",palavra);
}

