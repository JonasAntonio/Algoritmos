#include<stdio.h>
int main() {
	int p,s,be;
	int a,b,c;
	p=1,2,3,4;
	s=1,2,3,4;
	b=1,2,3,4;
	//Prato principal
	
	printf("Prato principal: \n");
	printf("1.Vegetariano\n");
	printf("2.Peixe\n");
	printf("3.Frango\n");
	printf("4.Carne de Porco\n");
	scanf("%d",&p);
	if(p>4 || p<1) {
	
		printf("Comando invalido\n\n");
		a=0;
	}
	else if(p==1) {
	
		printf("Vegetariano, 180 cal.\n\n");
		a=180;
	}
	else if(p==2) {
	
		printf("Peixe, 230 cal.\n\n");
		a=230;
	}
	else if(p==3) {
	
		printf("Frango, 250 cal.\n\n");
		a=250; 
	}
	else if(p==4) {
	
		printf("Carne de Porco, 350 cal.\n\n");
		a=350;
	}
	//Sobremesa
	
	printf("Sobremesa: \n");
	printf("1.Aacaxi\n");
	printf("2.Sorvete diet\n");
	printf("3.Mousse diet\n");
	printf("4.Mousse chocolate\n");
	scanf("%d", &s);
	if(s>4 || s<1) {
	
		printf("Comando invalido\n\n");
		b=0;	
	}
	else if(s==1) {
	
		printf("Abacaxi, 75 cal.\n\n");
		b=75;
	}
	else if(s==2) {
	
		printf("Sorvete diet, 110 cal.\n\n");
		b=110;
	}
	else if(s==3) {
	
		printf("Mousse diet, 170 cal.\n\n");
		b=170;
	}
	else if(s==4) {
	
		printf("Mousse chocolate, 200 cal.\n\n");
		b=200;
	}
	//Bebida	
	
	printf("Bebida\n");
	printf("1.cha\n");
	printf("2.Suco de Laranja\n");
	printf("3.Suco de Melao\n");
	printf("4.Refrigerante\n");
	scanf("%d",&be);
	if(be>4 || be<1) {
	
		printf("Comando invalido\n\n");
		c=0;
	}
	else if(be==1) {
	
		printf("Cha, 20 cal.\n\n");
		c=20;
	}
	else if(be==2) {
	
		printf("Suco de Laranja, 70 cal.\n\n");
		c=70;
	}
	else if(be==3) {
	
		printf("Suco de Melao, 100 cal.\n\n");
		c=100;
	}
	else if(be==4) {
	
		printf("Refrigerante, 120 cal.\n\n");
		c=120;
	}
	//Total de calorias
	printf("Total de calorias: %d calorias.\n",a+b+c);
	
}
