#include <stdio.h>
int main() {
	int i, num, soma = 0;
	for (i=1;i<=5;i++) {
		printf("Numero natural (%d/5): ",i);
		scanf("%d",&num);
		while (num<1) { // Consistência na entrada de dados
			printf("Erro.\nNumero natural (%d/5): ",i);
			scanf("%d", &num);
	}
	soma+=num;
	}
	printf("Soma = %d",soma);
}
