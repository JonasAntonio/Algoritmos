#include<stdio.h>
int main () {
	int n,i;
	float s;
	s=0;
	printf("Numero: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		s+=1./i;
		printf("Soma: %f",s);
}
