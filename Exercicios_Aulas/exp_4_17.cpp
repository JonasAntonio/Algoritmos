#include <stdio.h>
int main() {
	int num = 1;
	int soma = 0;
	while(num<=100) {
		soma+=num;
		num++;
	}
	printf("Soma: %d\n",soma);
}
