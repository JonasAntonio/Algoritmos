#include <stdio.h>
int fatorial(int);
int main() {
	int num;
	int fat;
	printf("Numero inteiro nao-negativo: ");
	scanf("%d",&num);
	fat = fatorial(num);
	printf("Fatorial: %d\n",fat);
}
int fatorial(int n) {
	int i;
	int fat = 1;
	for(i=1;i<=n;i++)
	fat*=i;
	return fat;
}
