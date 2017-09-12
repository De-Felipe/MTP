#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	unsigned int x, y;
	printf("Digite um numero: ");
	scanf("%u",&x);
	y=rand()%10;
	printf ("numero do usuario: %u\nnumero sorteado: %u",x,y);
	if ((x+y)%2==0)
		printf("\nA soma dos numeros e par.");
	else
		printf("\nA soma dos numeros e impar.");
	return 0;
}
