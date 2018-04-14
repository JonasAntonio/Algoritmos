#include <stdio.h>

int main() {
	int soma = 0;
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	while(num!=0) {
		soma+=num;
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
}
	printf("Soma: %d", soma);

}
