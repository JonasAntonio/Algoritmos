#include<stdio.h>
#include<string.h>
int main() {
	char string2[]="WANDER GASPAR";
	char string1[7];
	strncpy(string1,string2,6);
	printf("\n%s\n",string1);
}
