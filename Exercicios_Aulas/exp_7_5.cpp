#include <stdio.h>
void linha(int);
int main() {
int num;
	printf("Numero de asteriscos: ");
	scanf("%d",&num);
	linha(num);
	printf("CENTRO DE ENSINO SUPERIOR DE JUIZ DE FORA\n");
	linha(num);
}
void linha(int n) { //corpo da função
	int i;
	for(i=0;i<n;i++)
		printf("*");
	printf("\n");
}
