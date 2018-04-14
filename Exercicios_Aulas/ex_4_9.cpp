#include<stdio.h>
#include<ctype.h>
int main () {
	char ch;
	int i,tot=0;
	for(i=1;i<=10;i++) {
		printf("[%2d] ",i);
		scanf(" %c",&ch);
		if(isupper(ch))
		tot++;
	}
	printf("Letras maiusculas: %d",tot);
}
