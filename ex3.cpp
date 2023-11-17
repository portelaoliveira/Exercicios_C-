//exercício 3
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL,"portuguese");
    float num1,num2,soma,sub;
    printf ("\n Digite o primeiro número por favor:\n");
    scanf ("%f",&num1);
    printf ("\n Digite o segundo número por favor:\n");
    scanf ("%f",&num2);
    
    soma=(num1+num2);
    
    if (soma>20){
    soma=soma+8;    
        printf ("\n O resultado é:%2.2f \n",soma);
                     }
       if (soma<=20){
    sub=soma-5;    
        printf ("\n O resultado é:%2.2f \n",sub);
                     }
                      
    system("PAUSE");
    return EXIT_SUCCESS;
}
