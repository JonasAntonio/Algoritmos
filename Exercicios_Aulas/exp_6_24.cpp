#include <stdio.h>
#include <string.h>
int main() {
	char str1[6] = "AEIOU";
	char str2[3] = "OU";
	char *pos = NULL;
	pos = strstr(str1,str2);
	printf("%d\n",pos-str1);
}

