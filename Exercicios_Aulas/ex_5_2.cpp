#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main() {
	int i;
	char ch[12];
	for(i=0;i<12;i++){
		ch[i] = getche();
		if(!isalpha(ch[i]))
			ch[i]= '*';
	}
	printf("\nConteudo do vetor\n");
	for(i=0;i<12;i++)
		printf("%c",ch[i]);
}
