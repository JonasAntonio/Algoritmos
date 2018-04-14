#include <stdio.h>
void estatica(void); // Protótipo da função estática
int main() {
	int i;
	for (i = 1; i <= 5; i++)
		estatica();
	}
	void estatica(void) {
	int i = 0;
	static int j = 0; // declara e atribui valor a uma variável estática
	printf("Local = %d\tEstatica = %d\n", i++, j++);
}
