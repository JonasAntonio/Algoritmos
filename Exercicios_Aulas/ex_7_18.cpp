#include <stdio.h>
int power(int,int);
int main() {
	int x, n, f;
	printf("Valore de X: ");
	scanf("%d",&x);
	printf("Valore de N: ");
	scanf("%d",&n);
	f = power(x,n);
	printf("Potencia: %d\n",f);
}
int power(int x,int n) {
	if(n==0)
		return 1;
	else
		return x*power(x,n-1);
} 
