#include<stdio.h>
int main() {
	char ch;
	int soma=0;
	while(1) { //la�o sempre verdadeiro
		scanf("%c",&ch);
		if(ch=='.')//se for ponto
			break;//termina o la�o
		soma++;//incrementa o contador de caracteres
	}
	printf("Caracteres: %d",soma);
}
