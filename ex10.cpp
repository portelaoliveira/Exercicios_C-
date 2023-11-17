//exercício 10
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    system("color f4");
    int num;
    printf ("\n Digite a sua idade por favor: \n");
    scanf ("%d",&num);
    system("cls");

    if ((num<16))
    {
      printf ("\n Não é eleitor  \n");
                   }
    else if ((num>=18)&&(num<=65))
    {
         printf ("\n Eleitor obrigatório  \n");
                     }
    else if ((num>=16)||(num>65))
    {
         printf ("\n Eleitor facultativo   \n");
                     }
    system("PAUSE");
    return EXIT_SUCCESS;
}
