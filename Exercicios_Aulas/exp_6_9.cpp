#include <stdio.h>
int main() {
	char nome[81];
	printf("Digite seu nome completo: ");
	scanf(" %[^\n]",&nome);
	printf("Seu nome: %s\n",nome);
}

