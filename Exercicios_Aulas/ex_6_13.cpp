#include<stdio.h>
#include<string.h>
int main() {
	int num=0,i=0;
	char *pos = NULL;
	char str1[81],str2[81];
	printf("Frase:");
	scanf(" %80[^\n]",&str1);
	printf("Palavra:\n");
	scanf(" %80[^\n]",&str2);
	do{
		pos = strstr(str1+i,str2);
		if(pos==NULL)
			break;
		num++;
		i = pos-str1+1;
	} while(1);
	printf("%d vezes",num);
}
