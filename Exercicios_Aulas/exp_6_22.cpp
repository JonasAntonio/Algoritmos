#include <stdio.h>
#include <string.h>
int main() {
	char str1[6] = "AEIOU";
	char ch = 'I';
	if(strchr(str1,ch)==NULL) // se n�o encontrou
		printf("NAO\n");
	else
		printf("SIM\n");
}
