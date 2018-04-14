#include<stdio.h>
int main() {
	int n1,n2;
	printf("Numero: ");
	scanf("%1d%1d",&n1,&n2);
	if(n1==1)
		printf("Morse: .----");
	else if(n1==2)
		printf("Morse: ..---");
	else if(n1==3)
		printf("Morse: ...--");
	else if(n1==4)
		printf("Morse: ....-");
	else if(n1==5)
		printf("Morse: .....");
	else if(n1==6)
		printf("Morse: -....");
	else if(n1==7)
		printf("Morse: --...");
	else if(n1==8)
		printf("Morse: ---..");
	else if(n1==9)
		printf("Morse: ----.");
	else if(n1==0)
		printf("Morse: -----");
		
	if(n2==1)
		printf(".----");
	else if(n2==2)
		printf("..---");
	else if(n2==3)
		printf("...--");
	else if(n2==4)
		printf("....-");
	else if(n2==5)
		printf(".....");
	else if(n2==6)
		printf("-....");
	else if(n2==7)
		printf("--...");
	else if(n2==8)
		printf("---..");
	else if(n2==9)
		printf("----.");
	else if(n2==0)
		printf("-----");
}
