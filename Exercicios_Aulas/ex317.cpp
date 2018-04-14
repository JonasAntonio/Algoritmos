#include<stdio.h>
int main() {
	int dia, mes;
	dia>0 && dia<32;
	mes>0 && mes<13;
	printf("Digite uma data no formato DD/MM:");
	scanf("%d%d",&dia,&mes);
	printf("Data digitada: %d/%d.\n", dia, mes);
	if(dia<1 || dia>31)
		printf("Data Invalida.");
	else if(mes<1||mes>12)
		printf("Data Invalida.");
	else if(mes==2 && dia>28)
		printf("Data Invalida.");
	else if((mes==4||mes==6||mes==9||mes==11) && dia==31)
		printf("Data Invalida.");
	else
		printf("Data Valida");		
	
}
