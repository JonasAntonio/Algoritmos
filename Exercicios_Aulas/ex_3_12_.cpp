#include<stdio.h>
	int main() {
		int id;
		printf("Idade (5 ou superior): ");
		scanf("%d", id);
		if(id>30)
			printf("Senior");
		else if(id>15)
			printf("Adulto");
		else if(id>10)
			printf("Adolescente");
		else if(id>7)
			printf("Juvenil");
		else if(id>4)
			printf("Infantil");
		else
			printf("Categoria nao existente");
	}
