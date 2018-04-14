#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	char str[20][5];
	char s[5];
	int i, j;
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 4; j++)
			str[i][j] = rand()%26+65;
		str[i][j] = '\0';
	}
	//Exibir o vetor de strings:
	for(i = 0; i < 20; i++)
		printf("%2d %s\n",i,str[i]);
	// Pedir ao usuario para digitar uma string
	printf("Sequencia de 4 letras maiusculas: ");
	scanf(" %4[^\n]",&s);
	for(i = 0; i < 20; i++)
		if(strcmp(str[i],s) == 0)
	printf("%d\n",i);
}
