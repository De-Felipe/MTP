#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
	Matriz A, B, C;
	int linhaA, colunaA, linhaB, colunaB;
	printf("Digite, respectivamente, a quantidade de linhas e colunas da matriz A: ");
	scanf("%d%d", &linhaA, &colunaA);
	printf("Digite, respectivamente, a quantidade de linhas e colunas da matriz B (sendo que a quantidade de linhas de B deve ser a mesma que a de colunas de A): ");
	scanf("%d%d", &linhaB, &colunaB);
	if(colunaA==linhaB)
	{
		A=criarMatriz(linhaA, colunaA);
		B=criarMatriz(linhaB, colunaB);
		C=criarMatriz(linhaA, colunaB);
		preencherMatriz(A);
		preencherMatriz(B);
		C=multiplicaMat(A, B);
		imprimirMatriz(C);
		destruirMatriz(A);
		destruirMatriz(B);
		destruirMatriz(C);
	}
	else
		printf("\nA multiplicacao nao e possivel, pois a quantidade de colunas de A nao e igual a quantidade de linhas de B.");
	return 0;
}
