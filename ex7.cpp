//exercício 7
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
      system("color f4");
    int num;
    printf ("\n Digite um número por favor: \n");
    scanf ("%d",&num);
      system("cls");
    if ((num%3==0) && (num%7==0))
    {
      printf ("\n O número %2.2d é divisível por 3 e 7: \n",num);
                   }
    else {
         printf ("\n O número %2.2d não é divisível por 3 e 7: \n",num);
                     }

    system("PAUSE");
    return EXIT_SUCCESS;
}
