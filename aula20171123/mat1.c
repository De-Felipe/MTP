#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, B;
	int ordem;
	printf("Digite a ordem da matriz: ");
	scanf("%d", &ordem);
	A=criarMatriz(ordem, ordem);
	B=criarMatriz(ordem, ordem);
	preencherMatriz(A);
	B=adjunta(A);
	imprimirMatriz(B);
	destruirMatriz(A);
	destruirMatriz(B);
	return 0;
}
