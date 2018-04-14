#include <stdio.h>

int main() {

int soma = 0;

int num;

while(1) {

printf("Digite um numero inteiro: ");

scanf("%d",&num);

if(num==0)

soma+=num;
break;
}

printf("Soma: %d", soma);

}


