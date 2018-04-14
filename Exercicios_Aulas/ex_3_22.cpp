#include <stdio.h>
#include <ctype.h>
int main() {
	char ch1,ch2;
	char MG,SP,ES,RJ;
		printf("Digite a UF: \n");
		scanf("%c%c",&ch1,&ch2);
		ch1 = toupper(ch1);
		ch2 = toupper(ch2);
		if(ch1=='M' && ch2=='G')
			printf("Minas Gerais");
		else if(ch1=='S' && ch2=='P')
			printf("Sao Paulo");
		else if(ch1=='R' && ch2=='J')
			printf("Rio de Janeiro");
		else if(ch1=='E' && ch2=='S')
			printf("Espirito Santo");
		else
			printf("UF invalida");
}
			

