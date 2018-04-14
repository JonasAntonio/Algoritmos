#include<stdio.h>
	int main() {
		int cod;
		printf("Digite o codigo de origem do produto (1 a 30): ");
		scanf("%d", &cod);
		if(cod==1)
			printf("Sul");
		else if(cod==2)
			printf("Norte");
		else if(cod==3)
			printf("Leste");
		else if (cod==4)
			printf("Oeste");
		else if(cod==5||cod==6)
			printf("Nordeste");
		else if(cod==7||cod==8||cod==9)
			printf("Sudeste");
		else if(cod>=10 && cod<=20)
			printf("Centro-Oeste");
		else if(cod>=21 && cod<=30)
			printf("Noroeste");
		else
			printf("Codigo invalido");
	}
	
