#include <stdio.h>
int main() {
	char nome[81];
	int tam = 0;
	printf("Digite seu nome: ");
	scanf(" %80[^\n]",&nome);
	while(nome[tam] != '\0')
		tam++;
		printf("Numero de caracteres em %s: %d\n",nome,tam);
}
