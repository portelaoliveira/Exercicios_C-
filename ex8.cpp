//exerc�cio 8
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
      system("color f4");
    float sal,pre,pro;
    printf ("\n Digite o valor do s�lario mensal bruto (em R$) por favor: \n");
    scanf ("%f",&sal);
      system("cls");
    printf ("\n Digite o valor da presta��o (em R$) por favor: \n");
    scanf ("%f",&pre);
      system("cls");

    pro=(30*sal)/100;

    if (pre<=pro)
    {
      printf ("\n O seu emprestimo poder� ser concedido \n");
                   }
    else {
         printf ("\n Desculpa,mas o seu emprestimo n�o poder� ser concedido \n");
                     }

    system("PAUSE");
    return EXIT_SUCCESS;
}
