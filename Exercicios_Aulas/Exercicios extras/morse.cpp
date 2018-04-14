#include<stdio.h>
int main() {
	int n1,n2;
	printf("Numero: \n");
	scanf("%1d %1d",&n1,&n2);
	switch(n1) {
		case 1:
			printf(".----");
		break;
		case 2:
			printf("..---");
		break;
		case 3:
			printf("...--");
		break;
		case 4:
			printf("....-");
		break;
		case 5:
			printf(".....");
		break;
		case 6:
			printf("-....");
		break;
		case 7:
			printf("--...");
		break;
		case 8:
			printf("---..");
		break;
		case 9:
			printf("----.");
		break;
		case 10:
			printf("-----");
		break;
	}
		switch(n2){
			case 1:
				printf(".----");
			break;
			case 2:
				printf("..---");
			break;
			case 3:
				printf("...--");
			break;
			case 4:
				printf("....-");
			break;
			case 5:
				printf(".....");
			break;
			case 6:
				printf("-....");
			break;
			case 7:
				printf("--...");
			break;
			case 8:
				printf("---..");
			break;
			case 9:
				printf("----.");
			break;
			case 10:
				printf("-----");
			break;
	}
	
}
