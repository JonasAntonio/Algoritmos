#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 20
int main () {
	srand(time(0));
	int i,a[size],b[size],c[size];
	printf(" A   B    C\n");
	for(i=0;i<size;i++){
		a[i] = rand()%100;
		b[i] = rand()%100;
		c[i] = a[i]+b[i];
		printf("%2d  %2d  %3d\n",a[i],b[i],c[i]);
	}

}
