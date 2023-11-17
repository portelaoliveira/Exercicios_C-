//exercício 9
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
    if ((num>=18)&&(num<65))
    {
      printf ("\n Pessoa maior de idade \n",num);
                   }
    else if (num<18)
    {
         printf ("\n Pessoa menor de idade \n",num);
                     }
    else if (num>=65)
    {
         printf ("\n Pessoa idosa \n",num);
                     }
    system("PAUSE");
    return EXIT_SUCCESS;
}
