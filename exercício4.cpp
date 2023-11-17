/*exercicio 4: ler o nome do aluno(a) e a nota das três provas do semestre e no final informar o nome do aluno e sua nota*/

#include <iostream>

int main(int argc, char** argv) 

  {
	setlocale (LC_ALL,"portuguese");
	
	char nome [40];
	float num1,num2,num3,media;
	  
	printf ("\n Digite o seu nome por favor: \n");
	scanf ("%s",&nome);
	printf ("\n Digite a sua primeira nota por favor: \n");
	scanf ("%f",&num1);
	printf ("\n digite a sua segunda nota por favor: \n");
	scanf ("%f",&num2);
	printf ("\n Digite a sua terceira nota por favor: \n");
    scanf ("%f",&num3);
    
    media=(num1+num2+num3)/3;
    
    printf ("\n O aluno(a) %s tem média de %2.2f. \n ",nome,media);
    
    system ("PAUSE");
    
	 }
