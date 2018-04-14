#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int num,i;
	char str1[81],str2[81];
	printf("Palavra 1: ");
	scanf(" %80[^\n]",&str1);
	printf("Palavra 2: ");
	scanf(" %80[^\n]",&str2);
	for(i=0;i<strlen(str1);i++)
		str1[i]=toupper(str1[i]);
	for(i=0;i<strlen(str2);i++)
		str2[i]=toupper(str2[i]);
	num = strcmp(str1,str2);
	if(num)
		printf("Diferente");
	else
		printf("Igual");
}
