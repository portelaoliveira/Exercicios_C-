//exercício 5
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    float num;
    printf ("\n Digite um número qualquer:\n");
    scanf ("%f",&num);
    
    if (num>0)
    {
        printf ("\n O número %2.2f é POSITIVO \n",num);
                     }
    else if (num<0){
       printf ("\n O número %2.2f é NEGATIVO\n",num);
               }       
    else 
    {
       printf ("\n O número %2.2f é NULO \n",num);
               }    
                   
    system("PAUSE");
    return EXIT_SUCCESS;
}
