#include <stdio.h>
int main() {
	int num, soma = 0;
	do {
		printf("Digite um numero inteiro: ");
		scanf("%d",&num);
	if(num==0)
	continue;//desvia para a linha 11
		soma+=num;
	} while(num!=0);
	printf("Soma: %d",soma);
}
