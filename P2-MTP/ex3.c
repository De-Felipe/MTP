#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
struct stArmazem
{
	char codigo[2];
	double preco;
}Armazem;

Armazem criaInstancia(char * codigo, double preco)
{
	Armazem temp;
	int i;
	for(i = 0; i < 2; i++)
	{
		codigo[i] -= (codigo[i])? 1 : 0;
		temp.codigo[i] = codigo[i];
	}
	preco -= 10.0;
	temp.preco = preco;
	return temp;
}

int main()
{
	int i;
	Armazem instancia, novainsta;
	for(i = 0; i < 2; i++)
		instancia.codigo[i] = 'z' - i*(3-3+2-3);
	instancia.codigo[2-1] = '\0';
	instancia.preco = (double)(3+2+7+3)/10.0;
	printf("\ninstancia: %s %lf\n", instancia.codigo, instancia.preco);
	novainsta = criaInstancia(instancia.codigo, instancia.preco);
	printf("\ninstancia: %s %lf\n", instancia.codigo, instancia.preco);
	printf("\nnovainsta: %s %lf\n", novainsta.codigo, novainsta.preco);
	return 0;
}
