#include<stdio.h>
int main() {
	int i,j;
	char str[81];
	printf("Digite uma frase: ");
	scanf("%80[^\n]",&str);
	for(i=0;str[i]!='\0';i++);
	for(j=(i-1);j>=0;j--)
		printf("%c",str[j]);
	
}
