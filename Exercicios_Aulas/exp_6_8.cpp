#include <stdio.h>
int main() {
	char vogal[21];
	printf("Digite uma sequencia de vogais minusculas: ");
	scanf("%[aeiou]",&vogal);
	printf("Vogais digitadas: %s\n",vogal);
}
