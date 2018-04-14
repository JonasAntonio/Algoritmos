#include <stdio.h>
#define SIZE 5
struct Empregado {
	int matricula;
	float salario;
	char nome[21];
};
int main(){
	struct Empregado emp[SIZE];
	int i;
	for(i=0;i<SIZE;i++) {
		printf("\nEmpregado no. %d\nMatricula: ",(i+1));
		scanf("%d",&emp[i].matricula);
		printf("Salario..: ");
		scanf("%f",&emp[i].salario);
		printf("Nome.....: ");
		scanf(" %20[^\n]",&emp[i].nome);
	}
	printf("\nListagem de empregados\n");
	for(i=0;i<SIZE;i++) {
		printf("\nEmpreg. no. %d\nMatricula: ",(i+1),emp[i].matricula);
		printf("\nSalario: %.2f\nNome: %s\n",emp[i].salario,emp[i].nome);
	}
}
