// Exercício 5.2
#include <stdio.h>
#include <ctype.h>
int main() {
	int i;
	char ch[12];
	for(i=0;i<12;i++) {
		printf("[%2d] ",i);
		scanf(" %c",&ch[i]);
		if(!isalpha(ch[i])) // se não for letra
			ch[i]='*';
	}
	printf("Conteudo do vetor\n");
	for(i=0;i<12;i++)
		printf("[%2d] %c\n",i,ch[i]);
}
