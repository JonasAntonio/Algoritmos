#include<stdio.h>
int main () {
	int n,i,m;
	m=0;
	for(i=1;i<=10;i++) {
		printf("[%2d] ",i);
		scanf("%d",&n);
		if(n>m)
		m=n;
	}
	printf("Maior numero: %d", m);
}
