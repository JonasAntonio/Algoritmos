#include <stdio.h>
float mediaTres(float, float, float);
int main() {
	float num1, num2, num3, media;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%f",&num3);
	media =	mediaTres(num1,num2,num3);
	printf("Media: %.2f",media);
}
float mediaTres(float n1, float n2, float n3) {
	float med = (n1+n2+n3)/3;
	return med;
}
