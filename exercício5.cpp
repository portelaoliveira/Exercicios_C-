/*exercicio 5: apresentar os valores trocados de A e B*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
	setlocale (LC_ALL,"portuguese");
	
    float A,B,C;
    
    printf ("\n Digite por favor o valor de A: \n");
    scanf ("%f",&A);
    printf ("\n Digite por favor o valor de B: \n");
    scanf ("%f",&B);
    
    C=A;
    A=B;
    B=C;
    
    printf ("\n O valor de A é: \n %2.2f \n",A);
    printf ("\n O valor de B é: \n %2.2f \n",B);
    
    system("PAUSE");
    
    return EXIT_SUCCESS;
}
