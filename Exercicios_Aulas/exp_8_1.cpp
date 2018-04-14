#include <stdio.h>
struct Ponto {
	int x;
	int y;
};
int main() {
	struct Ponto ponto;
	printf("Digite as coordenadas x e y do ponto: ");
	scanf("%d%d",&ponto.x,&ponto.y);
	printf("\nCoordenadas: %d %d\n",ponto.x,ponto.y);
}
