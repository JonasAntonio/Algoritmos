#include <stdio.h>
#include <math.h>
	int main() {
		float h, peso;
		char sexo;
			printf("Digite a altura: ");
			scanf("%f", &h);
			printf("Digite o sexo(M/F): ");
			scanf(" %c: ", &sexo);
		if(sexo=='M'){
			peso = 72.7*h-58;
			printf("Homem: %.2f", peso);
		}else if(sexo=='F') {
			peso = 62.1*h-44.7;
			printf("Mulher: %.2f", peso);
		}else
			printf("Codigo sexo invalido");
		
}
