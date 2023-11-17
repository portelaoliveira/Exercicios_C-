/*exercicio 3: determinar o consumo médio de um automóvel através da distância total e o total de combustível gasto*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
	setlocale (LC_ALL,"portuguese");
	
    float distancia,gasolina,consumo_medio;
    
    printf ("\n Entre por favor com a distância total (em Km) percorrida em sua trajetória: \n");
    scanf ("%f",&distancia);
     printf ("\n Agora informe a quantidade de combustível (em L) que foi gasta nesse trajeto:  \n");
    scanf ("%f",&gasolina);
    
    consumo_medio=distancia/gasolina;
    
    printf ("\n O consumo médio realizado nesse trajeto foi de %.2f Km/L. \n",consumo_medio);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
