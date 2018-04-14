#include<stdio.h>
int main () {
	int n,i,m;
	for(i=1;i<=10;i++) {
		printf("[%2d] ",i);
		scanf("%d",&n);
		if(i==1||n>m)
		m=n;
	}
	printf("Maior numero: %d", m);
}
