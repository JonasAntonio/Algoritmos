#include<stdio.h>
	int main () {
	int p,s,be;
	int a,b,c;
	p=1,2,3,4;
	s=1,2,3,4;
	b=1,2,3,4;
	
	printf("Prato principal: \n");
	printf("1.Vegetariano\n");
	printf("2.Peixe\n");
	printf("3.Frango\n");
	printf("4.Carne de Porco\n");
	scanf("%d",&p);
	switch(p) {
		case 1: 
			printf("Vegetariano, 180 cal.\n\n");
			a=180;
			break;
		case 2:
			printf("Peixe, 230 cal.\n\n");
			a=230;
			break;
		case 3:
			printf("Frango, 250 cal.\n\n");
			a=250; 
			break;
		case 4:
			printf("Carne de Porco, 350 cal.\n\n");
			a=350;
			break;
		default:
			printf("Codigo invalido\n\n");
			break;
	}
	printf("Sobremesa: \n");
	printf("1.Aacaxi\n");
	printf("2.Sorvete diet\n");
	printf("3.Mousse diet\n");
	printf("4.Mousse chocolate\n");
	scanf("%d", &s);
	switch(s) {
		case 1:
			printf("Abacaxi, 75 cal.\n\n");
			b=75;
			break;
		case 2:
			printf("Sorvete diet, 110 cal.\n\n");
			b=110;
			break;
		case 3:
			printf("Mousse diet, 170 cal.\n\n");
			b=170;
			break;
		case 4:
			printf("Mousse chocolate, 200 cal.\n\n");
			b=200;
			break;
		default:
			printf("Comando invalido\n\n");
			break;
	}
	printf("Bebida\n");
	printf("1.cha\n");
	printf("2.Suco de Laranja\n");
	printf("3.Suco de Melao\n");
	printf("4.Refrigerante\n");
	scanf("%d",&be);
	switch(be) {
		case 1:
			printf("Cha, 20 cal.\n\n");
			c=20;
			break;
		case 2:
			printf("Suco de Laranja, 70 cal.\n\n");
			c=70;
			break;
		case 3:
			printf("Suco de Melao, 100 cal.\n\n");
			c=100;
			break;
		case 4:
			printf("Refrigerante, 120 cal.\n\n");
			c=120;
			break;		
		default:
			printf("Comando invalido\n\n");	
			break;
	}
	printf("Total de calorias: %d",a+b+c);
	}
	
