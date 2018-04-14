#include <stdio.h>
#include <string.h>

int quantidade(char[],char[]); 

int main() {
	int vezes;
	char frase[81], sequencia[6];
	scanf("%80[^\n]",&frase);
	scanf(" %5[^\n]",&sequencia);
	vezes =	quantidade(frase, sequencia);
	printf("%d", vezes);
}

int quantidade(char frase[], char sequencia[]) {
	int num=0 , i=0;
	char *pos = NULL;
	do {
		pos = strstr(frase+i,sequencia);
		if(pos==NULL)
			break;
		num++; 
		i = pos-frase+1; 
	} while(1); 

	return num;
}

