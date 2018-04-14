// Exercício 7.5
#include <stdio.h>
float mediaPon(int, int, int, float, float, float); // protótipo
int main() {
	int a, b, c;
	float p1, p2, p3, med;
	printf("Tres pesos...: ");
	scanf("%f%f%f",&p1,&p2,&p3);
	printf("Tres inteiros: ");
	scanf("%d%d%d",&a,&b,&c);
	med = mediaPon(a,b,c,p1,p2,p3);
	printf("Media ponderada: %.3f",med);
}
float mediaPon(int a, int b, int c, // continua
    float p1, float p2, float p3) {
	float mp = (p1*a + p2*b + p3*c)/(p1+p2+p3);
	return mp;
} 
