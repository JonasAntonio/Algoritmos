#include <stdio.h>
int main() {
	int i;
	int j;
	for (i=0, j=10; i+j>0; i++, j-=2)
		printf("i = %d e j = %2d\n", i, j);
}
