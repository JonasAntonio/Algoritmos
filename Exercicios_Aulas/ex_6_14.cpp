#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	char ch,usu[6],com[6]="";
	int i,tot=0;
	printf("String: ");
	scanf(" %5[^\n]",&usu);
	do{
		for(i=0;i<5;i++){
			ch = rand()%26+65;
			com[i] = ch;
		}
		tot++;
		if(strcmp(usu,com)==0)
			break;
	} while(1);
	printf("%s -> numero: %d",com,tot);
}
