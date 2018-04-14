#include<stdio.h>
	int main() {
		int id;
		printf("Digite a idade do nadador: ");
		scanf("%d", &id);
		if(id>=5 && id<=7)
			printf("Infantil");
		else if(id>=8 && id<=10)
			printf("Juvenil");
		else if(id>=11 && id<=15)
			printf("Adolescente");
		else if(id>=16 && id<=30)
			printf("Adulto");
		else if(id>30)
			printf("Senior");
		else
			printf("Categoria nao existe");
			
	}
