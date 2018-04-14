//exercicio muito importante
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main() {
	srand(time(0));
	int i, a,b,num;
	printf("Intervalo: ");
	scanf("%d%d",&a,&b);
	for(i=0;i<10;i++) {
		num = rand()%(b-a+1)+a;//(b-a+1)+a->formula geral.
		printf("%d\n",num);
	}
}
