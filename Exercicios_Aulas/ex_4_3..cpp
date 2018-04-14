#include<stdio.h>
int main() {
	float i;
	for(i=0;i<=1.00001;i+=0.1)
		printf("%.2f\n", i);
}
