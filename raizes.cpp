//O programa calcula e mostra o resultado de uma equacao do segundo grau.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	setlocale (LC_ALL,"portuguese");
	system("color f4");

	float a,b,c,x1,x2,delta;

   //ler os termos da equação

	printf ("\n Entre com o valor do termo A: \n");
	scanf ("%f",&a);
	system("cls");
	printf ("\n Entre com o valor do termo B: \n");
	scanf ("%f",&b);
	system("cls");
	printf ("\n Entre com o valor do termo C: \n");
	scanf ("%f",&c);
	system("cls");


   //calcular o valor de x1 e x2

	delta = b*b - 4*a*c;
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);

	//imprimir os resultados

	if(delta<0)
	{
	   printf ("\n A equação não possui raizes exatas \n");
	}
	else
     {
     printf ("\n x1=%.2f \n",x1);
     printf ("\n x2=%.2f \n",x2);
     }

	system ("PAUSE");

}
