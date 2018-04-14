#include <stdio.h>
#include <ctype.h>
int main() {
	char ch;
	printf("Digite um caractere: \n");
	scanf("%c",&ch);
	if(isalpha(ch))
		printf("Letra");
	else if(isdigit(ch))
		printf("Numero");
	else if(isblank(ch))
		printf("Espaco");
	else
		printf("Caractere nao aceito");
}
