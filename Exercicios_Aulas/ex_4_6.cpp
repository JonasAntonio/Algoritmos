#include<stdio.h>
int main() {
	int n1,n2,i;
	printf("Limites: ");
	scanf("%d%d",&n1,&n2);
	if(n1<n2)
		for(i=n1;i<=n2;i++)
			printf("%d\n", i);
	else
		for(i=n2;i<=n1;i++)
			printf("%d\n",i);
}
