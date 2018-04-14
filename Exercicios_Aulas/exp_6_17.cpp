#include <stdio.h>
#include <string.h>
int main() {
char nome[81];
	printf("Digite seu nome: ");
	scanf(" %80[^\n]",&nome);
	printf("Espaco : %d\n",sizeof(nome));
	printf("Tamanho: %d",strlen(nome));
}
