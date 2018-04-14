#include <stdio.h>
#include <ctype.h>
int main() {
	int letras = 0;
	char ch;
	do {
		printf("Digite uma letra: ");
		scanf(" %c",&ch);
		if(isalpha(ch))//se for letra
			letras++;//soma 1 ao total de letras
		else if(ch=='.')//se for o flag
			break;//termina o laço
		else
			printf("Erro! ");//char invalido
	} while(ch!='.');
	printf("Numero de letras digitadas: %d",letras);
}
