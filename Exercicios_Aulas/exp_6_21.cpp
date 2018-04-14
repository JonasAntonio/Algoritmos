#include <stdio.h>
#include <string.h>
int main() {
	char str1[6] = "Joao";
	char str2[6] = "Joana";
	printf("Diferenca: %d\n",strncmp(str1,str2,3));
}

