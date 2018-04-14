#include <stdio.h>
#include <string.h>
void criptografa(char[]);
void descriptografa(char[]);
int main() {
	char str[81];
	criptografa(str);
	printf("%s\n",str);
	scanf("%80[^\n]",&str);
	descriptografa(str);
	printf("%s\n",str);
}
void criptografa(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++)
		str[i]+=10;
}
void descriptografa(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++)
		str[i]-=10;
}

