#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main()
{
    Matriz A, I, B, R;
    int ordem;
    printf("Insira a ordem da Matriz principal: ");
    scanf("%d", &ordem);
    A=criarMatriz(ordem, ordem);
    preencherMatriz(A);
    B=criarMatriz(ordem, 1);
    preencherMatriz(B);
    if(determinante(A)!=0)
	{
		I=inversa(A);
    	R=multiplicaMat(I,B);
    }
    else
    	printf("\nA matriz A nao e inversivel.");
    imprimirSis(R);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(R);
    return 0;
}
