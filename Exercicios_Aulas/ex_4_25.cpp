#include<stdio.h>
int main() {
	int ano=0;
	float pa = 5,pb = 7;
	float ta = 1.03, tb = 1.02;
	while(pa<pb) {
		ano++;
		pa*=ta;
		pb*=tb;
	}
	printf("A: %.1f\n",pa);
	printf("B: %.1f\n",pb);
	printf("Tempo: %d anos.",ano);
}
