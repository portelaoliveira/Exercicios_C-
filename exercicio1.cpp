// exercício 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv) 
{
	setlocale(LC_ALL,"portuguese");
	system("color f4");
	
	int p,h; 
	float pe, peh, pet, mh, mt, comparativomaior, comparativomenor;
	char sexo;
	
	comparativomaior=0;
	comparativomenor=500;
	peh=0;
	pet=0;
	h=0;
	
	for(p=1;p<=23;p++)
	{
		printf("\n Informe o seu sexo por favor ? \n");
		scanf("%c",&sexo);
		system("cls");
		printf("\n Informe o seu peso por favor ? \n");
		scanf("%f",&pe);
		system("cls");
		getchar();
		
		pet=pet+pe;
		
		if(pe>comparativomaior)
		{
			comparativomaior=pe;
		}
		
		if(pe<comparativomenor)
		{
			comparativomenor=pe;
		}
		
		if(sexo=='M')
		{
			peh=peh+pe;
			h++;
		}
	}
		mh=peh/h;
		mt=pet/23;
		
		printf("\n Da classe, o maior peso registrado é %4.2f \n",comparativomaior);
		printf("\n Da classe, o menor peso registrado é %4.2f \n",comparativomenor);
		printf("\n A média do peso dos homens dessa classe é %4.2f \n",mh);
		printf("\n A média total dos pesos dessa classe é %4.2f\n",mt);
		
	
	system("pause");
	return 0;
}
