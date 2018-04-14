#include <stdio.h>
int main() {
	float pt;
	int op;
	op=1,2,3,4,5,6;
	printf("Digite o peso de uma pessoa na Terra: ");
	scanf("%f", &pt);
	printf("Escolha um planeta: \n");
	printf("1.Mercurio\n");
	printf("2.Venus\n");
	printf("3.Marte\n");
	printf("4.Jupter\n");
	printf("5.Saturno\n");
	printf("6.Urano\n");
	scanf("%d",&op);
		switch(op) {
			case 1:
				printf("Peso em Mercurio: %.2f", pt*.37);
				break;
			case 2:
				printf("Peso em Venus: %.2f", pt*.88);
				break;
			case 3:
				printf("Peso em Marte: %.2f", pt*.38);
				break;		
			case 4:
				printf("Peso em Jupter: %.2f", pt*2.64);
				break;
			case 5:
				printf("Peso em Saturno: %.2f", pt*1.15);
				break;
			case 6:
				printf("Peso em Urano: %.2f", pt*1.17);
				break;
			default:
				printf("Codigo Invalido");
		}
}
