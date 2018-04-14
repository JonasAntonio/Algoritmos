// Exercício 7.6
#include <stdio.h>
int inverteNum(int); // protótipo
int main() {
	int num, inv; // entre 100 e 999
	printf("Numero: ");
	scanf("%d",&num);
	inv = inverteNum(num);
	printf("Invertido: %d",inv);
}
int inverteNum(int num) {
	int u, d, c, inv, aux;
	u = num%10;
	aux = num/10;
	d = aux%10;
	c = aux/10;
	inv = u*100+d*10+c;
	return inv;
} 
