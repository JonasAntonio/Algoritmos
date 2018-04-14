#include<stdio.h>
#include<string.h>
int main() {
	char string2[13]="JUIZ DE FORA";
	char string1[13];
	if(sizeof(string1)>=sizeof(string2)) {
		strcpy(string1,string2);
		printf("%s\n",string1);
	}
	else
		printf("Erro.\n");
}
