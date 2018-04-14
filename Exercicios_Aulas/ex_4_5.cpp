#include<stdio.h>
int main() {
	int n1,n2,i;
	printf("Limite inferior: ");
	scanf("%d",&n1);
	printf("Limite superior: ");
	scanf("%d", &n2);
	for(i=n1;i<=n2;i++)
		printf("%d\n", i);
}
