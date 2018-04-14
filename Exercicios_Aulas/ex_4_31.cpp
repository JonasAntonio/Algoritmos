#include<stdio.h>
#include<ctype.h>
int main () {
	int ma=0,mi=0;
	char ch;
	printf("Caracteres: ");
	do{
	scanf(" %c",&ch);
	if(isalpha(ch)) {
		if(isupper(ch))
		ma++;
	else if(islower(ch))
		mi++;	
	}
	}
	while(isalpha(ch));
	printf("Maiusculas %d\n",ma);
	printf("Minusculas %d",mi);
		
}
