#include <stdio.h>

int divisao(int *resto, int *quociente, int a, int b)
{
	*resto = a%b;
	*quociente = a/b;
	return 0;
}

int main()
{
	int a,b,resto,quociente;
	printf("Insira, respectivamente, o dividendo e o divisor: ");
	scanf("%d%d", &a, &b);
	divisao( &resto, &quociente, a, b);
	printf("Quociente: %d\nResto: %d", quociente, resto);
	return 0;
}
