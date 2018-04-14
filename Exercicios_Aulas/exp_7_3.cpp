//evitar o não uso do protótipo
#include <stdio.h>
float volumeCilindro(float r, float h) {
	const float PI = 3.1415926536;
	return (PI * r * r * h);
}
int main() {
	float raio;
	float altura;
	float volume;
	printf("Informe o raio da base do cilindro:");
	scanf("%f",&raio);
	printf("Informe a altura do cilindro:");
	scanf("%f",&altura);
	volume = volumeCilindro(raio,altura);
	printf("Volume do cilindro: %.2f",volume);
}

