//exerc�cio 5
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    float num;
    printf ("\n Digite um n�mero qualquer:\n");
    scanf ("%f",&num);
    
    if (num>0)
    {
        printf ("\n O n�mero %2.2f � POSITIVO \n",num);
                     }
    else if (num<0){
       printf ("\n O n�mero %2.2f � NEGATIVO\n",num);
               }       
    else 
    {
       printf ("\n O n�mero %2.2f � NULO \n",num);
               }    
                   
    system("PAUSE");
    return EXIT_SUCCESS;
}
