#include <stdio.h>
#include <ctype.h>
int main() {
	char ch;
	printf("Digite um caractere: ");
	scanf("%c",&ch);
	if(isalpha(ch)) {
		if(islower(ch))
			ch = toupper(ch);
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			printf("Voce digitou uma vogal");
		else
		printf("Voce digitou uma consoante");
	} else
		printf("Voce nao digitou uma letra.");
}
