#include<stdio.h>
int main() {
	int num,soma=0,i=1;
	do{
		printf("[%2d] ",i);
		scanf("%d",&num);
		while(num<1 || num>10){ //la�o de consistencia
			printf("[%2d] ",i);
			scanf("%d",&num);	
		}
		soma+=num;//soma o numero valido � soma
		i++;//incrementa o contador de intera��es
	}while(i<=10);
		printf("Soma: %d",soma);
		
	
}
