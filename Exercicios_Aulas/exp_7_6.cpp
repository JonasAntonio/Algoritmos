#include <stdio.h>
void linha(int,char);
int main() {
	int num;
	char car;
	printf("Numero de caracteres: ");
	scanf("%d",&num);
	printf("Caractere: ");
	scanf(" %c",&car);
	linha(num,car);
	printf("CENTRO DE ENSINO SUPERIOR DE JUIZ DE FORA\n");
	linha(num,car);
}
void linha(int n, char ch) {
	int i;
	for(i=0;i<n;i++)
		printf("%c",ch);
	printf("\n");
}
