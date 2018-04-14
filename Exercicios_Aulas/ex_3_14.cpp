#include<stdio.h>
#include<math.h>
	int main() {
		float a,b,c;
		float delta,r1,r2;
		printf("Digite os valores de a, b e c: ");
		scanf("%f%f%f", &a,&b,&c);
		delta = b*b-4*a*c;
		if(delta>0) { //duas raizes reais
			r1 = (-b+sqrt(delta))/(2*a);
			r2 = (-b-sqrt(delta))/(2*a);
			printf("Raizes: %.2f e %.2f", r1,r2);
		} else if(delta=0) { //uma raiz real dupla
			r1 = -b/(2*a);
			printf("Raiz dupla: %.2f", r1);
		} else
			printf("Raizes complexas");
	}
	
