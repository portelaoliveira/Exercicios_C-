// exercício 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv) 
{
	setlocale (LC_ALL, "portuguese");
	system("color f4");
	
	int n,numero,soma;
	soma = 0;
	
	for(n=1;n<=10;n++)
	{
		printf("\n Digite um número inteiro qualquer, por favor: \n ");
		scanf("%d",&numero);
		system("cls");
		soma=soma+numero;
	}
	
	printf("\n A soma dos números digitados é igual a %d \n\n",soma);

	system("pause");
	return 0;
}
