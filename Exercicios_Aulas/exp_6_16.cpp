#include<stdio.h>
#include<string.h>
int main() {
	char string2[14]="WANDER GASPAR";
	char string1[14]="";
	strncpy(string1,string2,6);
	printf("%s",string1);
}
