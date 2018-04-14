#include <stdio.h>
int restoDivisao(int, int);
int main() {
	int num1, num2, resto;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	resto = restoDivisao(num1,num2);
	printf("Resto da divisao de %d por %d: %d\n",num1,num2,resto);
}
int restoDivisao(int n1, int n2) {
	return (n1 % n2);
}
