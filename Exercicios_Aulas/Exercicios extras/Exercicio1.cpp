#include<stdio.h>
#include<math.h>
	int main(){
		float n1,n2;
		int op;
		op==1,2,3,4,5;
			printf("Qual das seguintes operacoes voce deseja fazer?\n ");
			printf(" - Digite 1 para calcular media.\n ");
			printf(" - Digite 2 para calcular a diferenca do maior pelo menor.\n ");
			printf(" - Digite 3 para calcular o produto.\n ");
			printf(" - Digite 4 para calcular divisao do maior pelo menor.\n ");
			printf(" - Digite 5 para encerrar a execucao.\n");
			scanf("%d", &op);
			
		if (op==1)
		{
			printf("\n");
			printf("Media: \n");
			printf("Digite dois numeros: ");
			scanf("%f%f", &n1,&n2);
			printf("Voce digitou: %.2f e %.2f.\n", n1,n2);
			printf("A media e: %.2f\n", (n1+n2)/2); 
			printf("\n");
		}	
		else if(op==2)
		{
			printf("\n");
			printf("Diferenca: \n");
			printf("Digite dois numeros: ");
			scanf("%f%f", &n1,&n2);
			printf("Voce digitou: %.2f e %.2f.\n", n1,n2);
			if(n1>n2) {
				printf("A diferenca e: %.2f.\n", n1-n2);
		 }	else {
	 			printf("A diferenca e: %.2f.\n", n2-n1);
	 		}
			printf("\n");
		}
		else if(op==3)
		{
			printf("\n");
			printf("Produto: \n");
			printf("Digite dois numeros: ");
			scanf("%f%f", &n1,&n2);
			printf("Voce digitou: %.2f e %.2f.\n", n1,n2);
			printf("O produto e: %.2f.\n", n1*n2);
			printf("\n");
		}
		else if(op==4)
		{
			printf("\n");
			printf("Divisao: \n");
			printf("Digite dois numeros: ");
			scanf("%f%f",&n1,&n2);
			printf("Voce digitou: %.2f e %.2f.\n", n1,n2);
				if(n1>n2) 
					printf("O quociente e: %.2f.\n", n1/n2);
				else 
					printf("O quociente e: %.2f.\n", n2/n1);
			printf("\n");
		}
		else if(op==5)
		{
			printf("\n");
			printf("Execucao encerrada.");
		}
		else
		{
			printf("Erro, comando invalido.");
		}
		
	}
