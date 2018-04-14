#include<stdio.h>
int main () {
	int n,i,f;
	f=1;
	printf("Digite um numero: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		f*=i;
	printf("Fatorial: %d",f);
	
}
