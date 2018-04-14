#include <stdio.h>
int soma(int);
int main() {
	int num,total;
	printf("Digite um numero: ");
	scanf("%d",&num);
	total = soma(num);
	printf("Soma: %d",total);
}
int soma(int n) {
	int i,s=0;
	for(i=1;i<=n;i++)
		s+=i;
	return s;
}
