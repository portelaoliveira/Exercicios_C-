/*exercicio 8: receber a medida de dois �ndulos de um tri�ngulo e informar a medida do terceiro �ngulo*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)

{
	setlocale (LC_ALL,"portuguese");
	system("color f4");

    float num1,num2,c;

    printf ("\n Informe o primeiro �ngulo : \n");
    scanf ("%f",&num1);
    system("cls");
    printf ("\n Informe o segundo �ngulo : \n");
    scanf ("%f",&num2);
    system("cls");

    c=180-(num1+num2);

    if(num1+num2<=180)
{
    printf ("\n A medida do terceiro �ngulo � : %2.2f \n",c);
}
    if(num1+num2>180)
    {
        printf (" \n Digite outro valor por favor \n");
        }

    system ("pause");

}
