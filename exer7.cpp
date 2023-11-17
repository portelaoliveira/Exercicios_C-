/*exercicio 7: conversão do valor lido em dolar para o valor em real*/

#include <iostream>

int main(int argc, char** argv)

{
  setlocale(LC_ALL,"portuguese");
  system("color f4");

  float num1,valor;

  printf ("\n informe um valor em dólar (US$): \n");
  scanf ("%f",&num1);
   system("cls");

  valor=num1/3.2728;

  printf ("\n O valor obtido em real (R$) é : %5.5f \n",valor);

  system ("PAUSE");

}
