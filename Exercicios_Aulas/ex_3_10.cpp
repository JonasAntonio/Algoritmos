#include <stdio.h>
int main() {
int a;
int b;
int c;
printf("Digite os lados de um triangulo: ");
scanf("%d%d%d",&a,&b,&c);
if(a == b && a == c)
printf("Triangulo equilatero");
else if(a==b || a==c || b==c)
printf("Triangulo isosceles");
else
printf("Triangulo escaleno");
}
