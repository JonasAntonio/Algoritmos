#include <stdio.h>
#include <ctype.h>
int main() {
	char ch;//"digito" hexadecimal
	int dec;//valor decimal correspondente
	printf("Digite um numero hexadecimal: \n");
	scanf("%c",&ch);
	ch = toupper(ch);
	if(ch>='0' && ch<='9') {
		dec = ch-48;
		printf("Decimal: %d",dec);	
	} else if(ch>='A' && ch<='E') {
		dec = ch-55;
		printf("Decimal: %d", dec);
	}else
		printf("Hexadecimal invalido");
		
	
}
