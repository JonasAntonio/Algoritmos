#include<stdio.h>
int main () {
	int n,i;
	float med=0;
	for(i=1;i<=10;i++) {
		printf("[%2d]",i);
		scanf("%d",&n);
		med+=n;
	}
	med/=10;
	printf("Media: %.2f",med);
}
