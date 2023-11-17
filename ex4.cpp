//ecercício 4
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    int num;
    printf ("\n Digite um número por favor:\n");
    scanf ("%d",&num);
    
    if (num%3==0)
    {
        printf ("\n O número %2.2d é múltiplo de 3 \n",num);
                     }
    else {
       printf ("\n O número %2.2d não é múltiplo de 3\n",num);
               }       
                      
    system("PAUSE");
    return EXIT_SUCCESS;
}
