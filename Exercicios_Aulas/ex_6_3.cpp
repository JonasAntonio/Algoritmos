#include<stdio.h>
#include<ctype.h>
int main() {
	char frase[81];
	int i=0,vog=0;
	printf("Digite uma frase:\n");
	scanf(" %80[^\n]",&frase);
	while(frase[i]!='\0'){//enquanto nao for o fim da string
		frase[i]=toupper(frase[i]);
		if(frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U')
			vog++;//incrementa o contador de vogais
		i++;
	}
	printf("Vogais: %d",vog);
}
