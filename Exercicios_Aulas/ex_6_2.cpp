#include<stdio.h>
int main() {
	char frase[81];
	int i=0;
	printf("Digite uma frase:\n");
	scanf(" %80[^\n]",&frase);
	while(frase[i]!='\0'){
		if(frase[i]==' ')
			frase[i]='\n';
		i++;
	}
	printf("%s",frase);
}
