/*exercicio 3: determinar o consumo m�dio de um autom�vel atrav�s da dist�ncia total e o total de combust�vel gasto*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
	setlocale (LC_ALL,"portuguese");
	
    float distancia,gasolina,consumo_medio;
    
    printf ("\n Entre por favor com a dist�ncia total (em Km) percorrida em sua trajet�ria: \n");
    scanf ("%f",&distancia);
     printf ("\n Agora informe a quantidade de combust�vel (em L) que foi gasta nesse trajeto:  \n");
    scanf ("%f",&gasolina);
    
    consumo_medio=distancia/gasolina;
    
    printf ("\n O consumo m�dio realizado nesse trajeto foi de %.2f Km/L. \n",consumo_medio);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
