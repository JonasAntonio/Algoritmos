#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#define t 15
int main () {
	srand(time(0));
	int i;
	char a[t],b[t];
	for(i=0;i<t;i++){
		a[i] = rand()%26+65;
		b[i] = tolower(a[i]);
		printf("[%2d] %c %c\n",i,a[i],b[i]);
	}
		
		
}
	
