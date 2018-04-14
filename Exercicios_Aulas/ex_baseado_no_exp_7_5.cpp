#include <stdio.h>
void linha(int,char);
int main() {
	int num;
	char ch;
	printf("Numero de caracteres: ");
	scanf("%d",&num);
	printf("Caractere a ser imprimido: ");
	scanf(" %c",&ch);
	linha(num,ch);
	printf("CENTRO DE ENSINO SUPERIOR DE JUIZ DE FORA\n");
	linha(num,ch);
}
void linha(int n,char chr) { //corpo da função
	int i;
	for(i=0;i<n;i++)
		printf("%c",chr);
	printf("\n");
}
