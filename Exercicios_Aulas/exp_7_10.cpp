#include <stdio.h>
#include <string.h>
void str(char[]);
int main() {
	char p[] = "Teste";
	str(p);
	printf("%s\n",p);
}
void str(char ch[]) {
	int i;
	for (i = 0; ch[i]!='\0'; i++)
	if(ch[i]>='a'&&ch[i]<='z')
		ch[i]-=32;
}

