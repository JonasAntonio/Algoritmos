#include<stdio.h>
int main() {
	char str1[81],str2[81]="";
	int i=0,j=0;
	printf("Digite uma frase:\n");
	scanf(" %80[^\n]",&str1);
	do {
		while(str1[i]==' ') 
			i++;
		str2[j]=str1[i];
		i++;
		j++;
	} while(str1[i]!='\0');
		printf("%s",str2);
}
