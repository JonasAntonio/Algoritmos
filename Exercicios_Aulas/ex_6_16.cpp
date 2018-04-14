#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	char suj[4][20]={"Pedro","Maria","Carlos","Ana"};
	char ver[4][20]={"gosta de","nao gosta de","adora","detesta"};
	char pre[4][20]={"feijoada","futebol","samba","feriado"};
	int i=rand()%4;
	int j=rand()%4;
	int k=rand()%4;
	printf("%s %s %s",suj[i],ver[i],pre[k]);
}	
