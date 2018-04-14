#include<stdio.h>
int main() {
	int num, maior, menor,i=1;
	while(1) {
		printf("Numero: ");
		scanf("%d",&num);
		if(num<1||num>1000)//flag
			break;
		if(i==1) { //é a primeira vez
			maior=num;
			menor=num;
			i=2;
		} else if(num<menor)
			menor=num;
		else if(num>maior)
			maior=num;
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d",menor);
}
