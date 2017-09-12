#include<stdio.h>

int main()
{
	int x, i, f;
	printf("Digite um numero para calcular seu fatorial: ");
	scanf("%d",&x);
	if (x==0 || x==1)
		f=1;
	else
	{
		f=x;
		for (i=1;i<x;i++)
			f=f*i;
	}
	printf("O fatorial de %d e %d.", x, f);
	return 0;
}
