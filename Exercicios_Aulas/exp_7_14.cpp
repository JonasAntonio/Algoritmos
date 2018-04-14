#include <stdio.h>
int fatrec(int);
int main() {
	int num;
	int fat;
	printf("Numero inteiro nao-negativo: ");
	scanf("%d",&num);
	fat = fatrec(num);
	printf("Fatorial: %d\n",fat);
}
int fatrec(int n) {
	if(n==0)
		return 1;
	else
		return n * fatrec(n-1);
} 
