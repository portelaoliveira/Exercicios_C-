//exercício 1
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    float num;
    printf ("\n Digite um número por favor:\n");
    scanf ("%f",&num);
    if (num>20)
    {
         printf ("\n O Número digitado é:%2.2f\n",num);
         
               }
    else {
         printf ("\n Digite outro número por favor:\n",num);
              }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
