#include <stdio.h>
int main() {
	int i = 0;
	for ( ; ; ) {
		printf("%d\n", i++);
		if(i==10)
		break;
	}
}
