#include<stdio.h>
int main() {
	int num, i=1, soma=0;
	while(i<=10) {
		printf("[%2d] ",i);
		scanf("%d",&num);
		if(num>0)
			soma+=num;
		i++;
	}
	printf("Soma: %d",soma);
}
