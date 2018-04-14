#include <stdio.h>
#include <string.h>

void turma(int); 

int main() {
	int alunos;
	scanf(" %d", &alunos);
	turma(alunos);
}

void turma(int alunos) {
	int i;
	char nota[10];
	char aluno[alunos][21];
	for(i=0;i<alunos;i++){
		scanf(" %s\t%d", &aluno[i], &nota[i]);
	}
	for(i=0;i<alunos;i++){
		if(nota[i] >= 60)
		printf("%s\n", aluno[i]);
	}
}


