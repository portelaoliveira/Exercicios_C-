/*exercicio 2: receber dois n�meros e ao final mostrar a multiplica��o e a divis�o*/

#include <iostream>

     int main(int argc, char** argv)

{
	setlocale (LC_ALL,"portuguese");
	system("color f4");

    float num1,num2,multi,divi;

     printf ("\n Digite por favor o primeiro n�mero: \n");
     scanf ("%f",&num1);
     system("cls");
     printf ("\n digite o segundo n�mero por favor: \n");
     scanf ("%f",&num2);
     system("cls");

     multi=num1*num2;
     divi=num1/num2;

     printf ("\n A multiplica��o dos dois algarismos �: %.2f. \n",multi);
     printf ("\n A divis�o dos dois algarismos �: %f. \n",divi);

     system ("PAUSE");

}
