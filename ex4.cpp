//ecerc�cio 4
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    int num;
    printf ("\n Digite um n�mero por favor:\n");
    scanf ("%d",&num);
    
    if (num%3==0)
    {
        printf ("\n O n�mero %2.2d � m�ltiplo de 3 \n",num);
                     }
    else {
       printf ("\n O n�mero %2.2d n�o � m�ltiplo de 3\n",num);
               }       
                      
    system("PAUSE");
    return EXIT_SUCCESS;
}
