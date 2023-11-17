/*exercicio 1: receber dois números e ao final mostrar a soma e a subtração*/

#include <iostream>

int main(int argc, char** argv)
 {
 	setlocale(LC_ALL,"portuguese");
 	system("color f4");

	 int num1,num2,soma,sub;

     printf ("\n Digite por favor o primeiro número : \n");
     scanf ("%d",&num1);
     system("cls");
     printf ("\n Digite por favor o segundo número : \n");
     scanf ("%d",&num2);
     system("cls");

     soma=num1+num2;
     sub=num1-num2;

     printf ("\n A soma dos dois algarismos é : %2.2d \n",soma);
     printf ("\n a subtração dos dois algarismos é : %2.2d \n",sub);

     system ("PAUSE");
}
