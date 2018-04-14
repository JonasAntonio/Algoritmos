#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main() {
	srand(time(0));
	int i, num;
	for(i=0;i<10;i++) {
		num = rand()%10;
		printf("%d\n",num);
	}
}
