#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void criptografa(char[]); 
void descriptografa(char[]);

int main() {
	char str[81];
	scanf("%80[^\n]",&str);
	criptografa(str);
	printf("%s\n",str);
	descriptografa(str);
	printf("%s",str);
}
void criptografa(char str[]) {
	srand(time(0));
	int i;
	for(i=0;str[i]!='\0';i++) {
		str[i]+= rand()%(-20+(-20)+1)+(-20);
	}
}
void descriptografa(char str[]) {
	srand(time(0));
	int i;
	for(i=0;str[i]!='\0';i++) 
		str[i]-= rand()%(-20+(-20)+1)+(-20);;
		
}
