#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, I;
	int ordem;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	A=criarMatriz(ordem, ordem);
	I=criarMatriz(ordem, ordem);
	preencherMatriz(A);
	I=inversa(A);
	imprimirMatriz(I);
	destruirMatriz(A);
	destruirMatriz(I);
	return 0;
}
