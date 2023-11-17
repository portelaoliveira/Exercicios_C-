/*exercicio 6: converter a temperatura em graus Celsius para Fahrenheit ou vice versa*/

#include <iostream>

int main(int argc, char** argv)
{
	setlocale (LC_ALL,"portuguese");
	system("color f4");

	float m,c,f;

	printf ("\n Entre com 1 para converter Celsius em Fahrenheit e outro valor para converter Fahrenheit em Celsius \n");
	scanf ("%f",&m);
    if(m==1)
{
    printf ("\n Digite a temperatura em Celsius \n");
    scanf ("%f",&c);

	 f=(-9*c-160)/-5;

	printf ("\n O valor da temperatura em graus Fahrenheit é: %3.2f ºF \n",f);
}

else{
    printf ("\n Digite a temperatura em Fahrenheit \n");
    scanf ("%f",&f);

    c=5*(f-32)/9;

    printf ("\n O valor da temperatura em graus Celsius é: %3.2f ºF \n",c);
}
	system ("PAUSE");

}
