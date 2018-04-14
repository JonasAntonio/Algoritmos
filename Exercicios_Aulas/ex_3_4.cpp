#include <stdio.h>
#include <math.h>
	int main() {
		float num;
		printf("Real: ");
		scanf("%f",&num);
		if(num>=0)
			num = log(num);
			printf("Resposta: %f\n",num);
		}
	
