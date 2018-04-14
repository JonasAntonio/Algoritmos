#include <stdio.h>
#include <string.h>
int main() {
	char str[6] = "AEIOU";
	char ch = 'I';
	char *pos = NULL; // variavel do tipo ponteiro
	pos = strchr(str,ch);
	printf("%d\n",pos-str);
}
