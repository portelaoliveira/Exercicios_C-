/*exercicio 9: ler o n�mero total de eleitores,o n�mero de votos brancos,nulos e v�lidos,calcular e escrever o percentual de cada um em rela��o ao total de eleitores*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	setlocale (LC_ALL,"portuguese");
    system("color f4");

    float t,b,n,v,pt,pb,pn,pv;

    printf ("\n ELEI��ES NO BRASIL, FORAAA TEMER \n");
    printf ("\n Digite o n�mero de votos V�lidos : \n");
    scanf ("%f",&v);
    system("cls");
    while (v<=0){
        printf(" Dado inv�lido, por favor digite novamente \n");
        scanf ("%f",&v);
        system("cls");
    }

    printf ("\n Digite o n�mero de votos Brancos : \n");
    scanf ("%f",&b);
    system("cls");
    printf ("\n Digite o n�mero de votos Nulos : \n");
    scanf ("%f",&n);
    system("cls");

    t=b+n+v;

    pb=(100*b)/t;
    pn=(100*n)/t;
    pv=(100*v)/t;
    pt=(100*t)/t;

    printf ("\n O resultado das elei��es foi :\n");
     printf ("\n Votos totais: %.0f votos   %3.2f%% \n",t,pt);
      printf ("\n V�lidos:  %.0f votos      %3.2f%% \n",v,pv);
       printf ("\n Brancos: %.0f votos      %3.2f%% \n",b,pb);
        printf ("\n Nulos:  %.0f votos      %3.2f%% \n",n,pn);


    system("PAUSE");

    return EXIT_SUCCESS;
}
