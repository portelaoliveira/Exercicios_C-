/*exercicio 6: converter a temperatura em graus Celsius para Fahrenheit*/

#include <iostream>

int main(int argc, char** argv) 
{
	setlocale (LC_ALL,"portuguese");
	
	float c,f;
	
	printf ("\n Informe por favor o valor lido da temperaura em graus Celsius (�C): \n");
	scanf ("%f",&c);
	
	f=(9*c+160)/5;
	
	printf ("\n O valor da temperatura em graus Fahrenheit �: %3.2f �F \n",f);
	
	system ("PAUSE");
	
}
