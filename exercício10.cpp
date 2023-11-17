/*exercicio 10: imprimir o quociente e o resto da divião entre X e Y*/

#include <cstdlib>
#include <iostream>

  int main(int argc, char *argv[])

{
    setlocale (LC_ALL,"portuguese");
    system("color f4");
    int x,y;

    printf ("\n Digite um número para x:\n");
    scanf ("%d",&x);
    system("cls");
    printf ("\n Digite um número para y:\n");
    scanf ("%d",&y);
    system("cls");
    printf ("\n O quociente de x por y é: %d \n",x / y);
    printf ("\n O resto da divisao de x por y é: %d \n",x % y);


    system("PAUSE");

}
