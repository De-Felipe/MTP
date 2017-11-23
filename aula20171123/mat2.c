#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A;
	int ordem;
	double det;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	A=criarMatriz(ordem, ordem);
	preencherMatriz(A);
	det=determinante(A);
	printf("%lf", det);
	destruirMatriz(A);
	return 0;
}
