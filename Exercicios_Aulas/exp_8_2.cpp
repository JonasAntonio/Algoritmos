#include <stdio.h>
struct Empregado {
	int matricula;
	float salario;
	char nome[21];
};
int main(){
	struct Empregado emp;
	printf("Matricula: ");
	scanf("%d",&emp.matricula);
	printf("Salario..: ");
	scanf("%f",&emp.salario);
	printf("Nome.....: ");
	scanf(" %20[^\n]",emp.nome);
	printf("\nEmpregado\nMatricula: %d",emp.matricula);
	printf("\nSalario: %.2f\nNome: %s\n",emp.salario,emp.nome);
}
