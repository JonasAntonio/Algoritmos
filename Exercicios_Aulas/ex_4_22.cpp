#include<stdio.h>
int main() {
	char ch;
	int soma=0;
	while(1) { //laço sempre verdadeiro
		scanf("%c",&ch);
		if(ch=='.')//se for ponto
			break;//termina o laço
		soma++;//incrementa o contador de caracteres
	}
	printf("Caracteres: %d",soma);
}
