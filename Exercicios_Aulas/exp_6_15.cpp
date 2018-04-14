#include<stdio.h>
#include<string.h>
int main() {
	int i;
	char entrada[6];
	char saida[51]="";
	printf("Digite uma sequencia de 5 caracteres: ");
	scanf(" %5[^\n]",&entrada);
	for(i=0;i<10;i++)
		strcpy(saida+i*5,entrada); //Atenção!!
	printf("%s\n",saida);
}
