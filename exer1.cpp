/*exercicio 1: receber dois n�meros e ao final mostrar a soma e a subtra��o*/

#include <iostream>

int main(int argc, char** argv)
 {
 	setlocale(LC_ALL,"portuguese");
 	system("color f4");

	 int num1,num2,soma,sub;

     printf ("\n Digite por favor o primeiro n�mero : \n");
     scanf ("%d",&num1);
     system("cls");
     printf ("\n Digite por favor o segundo n�mero : \n");
     scanf ("%d",&num2);
     system("cls");

     soma=num1+num2;
     sub=num1-num2;

     printf ("\n A soma dos dois algarismos � : %2.2d \n",soma);
     printf ("\n a subtra��o dos dois algarismos � : %2.2d \n",sub);

     system ("PAUSE");
}
