#include <stdio.h>
void swap(void);
float vg1, vg2;
int main() {
	vg1 = 13.7;
	vg2 = 28.4;
	printf("Variaveis Globais: %1.f e %1.f\n",vg1,vg2);
	swap();
	printf("Variaveis Globais: %1.f e %1.f\n",vg1,vg2);
}
void swap(void) {
	float aux;
	aux = vg1;
	vg1 = vg2;
	vg2 = aux;
}
