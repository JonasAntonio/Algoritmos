#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main() {
	srand(time(0));
	int i,moeda,c=0;//c=cara
	for(i=0;i<1000;i++) {
		moeda = rand()%2;
		if(moeda)
			c++;
	}
		printf("Cara: %d\n",c);
		printf("Coroa: %d",1000-c);
}

