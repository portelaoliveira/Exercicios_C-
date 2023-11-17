//exercício 2
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    int soma,num1,num2;
    printf ("\n Digite o primeiro número por favor:\n");
    scanf ("%d",&num1);
    printf ("\n Digite o segundo número por favor:\n");
    scanf ("%d",&num2);
    
    soma=(num1+num2);
    
    if (soma>10)
    {
        printf ("\n O resultado é:%2.2d \n",soma);
                     }
    else {
       printf ("\n Digite outros dois valores por favor:\n",soma);
               }       
                      
    system("PAUSE");
    return EXIT_SUCCESS;
}
