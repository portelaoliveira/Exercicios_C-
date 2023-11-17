/*exercicio 8: receber a medida de dois ândulos de um triângulo e informar a medida do terceiro ângulo*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)

{
	setlocale (LC_ALL,"portuguese");
	
    float num1,num2,c;
    
    printf ("\n Sabendo que a soma dos ângulos internos de um triângulo é 180 graus,entre com dois valores no qual a soma fique entre 0 e 180 : \n");
    printf ("\n Informe o primeiro ângulo : \n");
    scanf ("%f",&num1);
    printf ("\n Informe o segundo ângulo : \n");
    scanf ("%f",&num2);

    c=180-(num1+num2);

    printf ("\n A medida do terceiro ângulo é : %2.2f \n",c);
    
    system ("pause");

}
