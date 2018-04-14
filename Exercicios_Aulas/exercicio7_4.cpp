// Exercício 7.4
#include <stdio.h>
float mediaPon(int, int, int); // protótipo
int main() {
	int a, b, c;
	float med;
	printf("Tres inteiros: ");
	scanf("%d%d%d",&a,&b,&c);
	med = mediaPon(a,b,c);
	printf("Media ponderada: %.3f",med);
}
float mediaPon(int a, int b, int c) {
	float med = (a + 2*b + 3*c)/6.;
	return med;
} 
