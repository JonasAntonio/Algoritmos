#include<stdio.h>
int main() {
	int i,n,s=0;
		for(i=1; ;i++){
			printf("[%2d] ",i);
			scanf("%d",&n);
				if(n<0) break;
			s+=n;
		}	
			printf("Soma: %d",s);
			
			
}
