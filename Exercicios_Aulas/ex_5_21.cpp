#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 6
int main () {
	srand(time(0));
	int i,dado[size]={};
	for(i=0;i<1000;i++){
		dado[rand()%size]++;
	}
	for(i=0;i<size;i++)
		printf("[%d] %3d\n",i+1,dado[i]);
}
