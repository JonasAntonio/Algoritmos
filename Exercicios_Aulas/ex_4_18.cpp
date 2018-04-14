#include<stdio.h>
int main() {
	int i, j,l,c;
		printf("Numero de linhas: ");
		scanf("%d",&l);
		printf("Numero de colunas: ");
		scanf("%d",&c);
		for(i=1;i<=l;i++){//linhas
			for(j=1;j<=c;j++)//colunas
				printf("* ");
				printf("\n");
		}

}
