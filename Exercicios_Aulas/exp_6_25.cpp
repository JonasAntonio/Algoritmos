#include <stdio.h>
int main() {
	char str[5][81];
	int i;
	for(i = 0; i < 5; i++) {
		printf("Digite seu nome: ");
		scanf(" %80[^\n]",&str[i]);
	}
	for(i = 0; i < 5; i++)
		printf("%s\n",str[i]);
}
