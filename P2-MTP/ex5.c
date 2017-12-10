#include "dados.h"
#include <stdio.h>
#include <stdlib.h>

int fib(int indice) {
	static int memoria[36] = {0,1};
	int condicao = (memoria[indice] || !indice);
	int resposta = (condicao)?memoria[indice]:fib(indice-1)+fib(indice-2);
	return resposta;
}

int main() {
	printf("Fibonacci(%d) = %d\n", KNUM0-1, fib(KNUM0-1));
	printf("Fibonacci(%d) = %d\n", KNUM1-1, fib(KNUM1-1));
	printf("Fibonacci(%d) = %d\n", KNUM2-1, fib(KNUM2-1));
	printf("Numero secreto = %d\n", KANO2*fib(KNUM0-1) +
	KANO1*fib(KNUM2-1) + KANO0*fib(KNUM1-1) -
	KCUR0*KCUR1*KCUR2);
	return 0;
}
