#include <stdio.h>
#include <string.h>
int main() {
	char prenome[21], sobrenome[21], nome[41]="";
	printf("Digite seu prenome: ");
	scanf(" %20[^\n]",&prenome);
	printf("Digite seu sobrenome: ");
	scanf(" %20[^\n]",&sobrenome);
	strcat(nome,prenome);
	strcat(nome," ");
	strcat(nome,sobrenome);
	printf("Nome completo: %s",nome);
}
