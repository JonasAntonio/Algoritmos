#include<stdio.h>
int main() {
int i, j;
int num;
	printf("Numero de inteiro: ");
	scanf("%d",&num);
	for (i=1; i<=num; i++)
	for (j=1; j<=i; j++)
		printf("i=%d j=%d\n",i,j);
}
