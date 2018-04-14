#include<stdio.h>
#include<math.h>
	int main() {
		int n;
		int p;
		printf("Digite um numero intero entre 1000 e 9999:\n ");
		scanf("%d", &n);
		printf("Voce digitou: %d\n", n);
		if(n>9999)
			printf("valor nao aceito");
		else if(n<1000)
			printf("valor nao aceito");
			
		else if(n%11==0)
		printf("O numero %d e palindromo", n);

		else if(n%11>0)
			printf("O numero %d nao e palindromo", n);
				
	}
