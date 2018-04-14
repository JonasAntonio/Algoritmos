#include<stdio.h>
int main() {
	int i,n[10];
	printf("Entrada\n");
	for(i=0;i<10;i++) 
		do{
			printf("[%2d] ",i);
			scanf("%d",&n[i]);
		} while(n[i]<1 || n[i]>10);
	printf("\nSaida\n");
	for(i=0;i<10;i++)
		printf("[%2d] %-5d\n",i,n[i]);
		
}
