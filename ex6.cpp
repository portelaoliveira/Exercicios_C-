//exercício 6
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    float num1,num2;
    printf ("\n Digite um valor para A:\n");
    scanf ("%f",&num1);
    printf ("\n Digite um valor para B:\n");
    scanf ("%f",&num2);
    
    if (num1>num2)
    {
        printf ("\n O valor de %2.2f (A) é maior que %2.2f (B) \n",num1,num2);
                     }
    else if (num1<num2){
       printf ("\n O valor de %2.2f (A) é menor que %2.2f (B) \n",num1,num2);
               }       
     else if (num1==num2){
       printf ("\n O valor de %2.2f (A) é igual a %2.2f (B) \n",num1,num2);
               }     
                   
    system("PAUSE");
    return EXIT_SUCCESS;
}
