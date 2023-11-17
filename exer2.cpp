/*exercicio 2: receber dois números e ao final mostrar a multiplicação e a divisão*/

#include <iostream>

     int main(int argc, char** argv)

{
	setlocale (LC_ALL,"portuguese");
	system("color f4");

    float num1,num2,multi,divi;

     printf ("\n Digite por favor o primeiro número: \n");
     scanf ("%f",&num1);
     system("cls");
     printf ("\n digite o segundo número por favor: \n");
     scanf ("%f",&num2);
     system("cls");

     multi=num1*num2;
     divi=num1/num2;

     printf ("\n A multiplicação dos dois algarismos é: %.2f. \n",multi);
     printf ("\n A divisão dos dois algarismos é: %f. \n",divi);

     system ("PAUSE");

}
