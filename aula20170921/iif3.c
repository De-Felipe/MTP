#include<stdio.h>

int main()
{
	double x, i, f;
	printf("Digite um numero para calcular seu fatorial: ");
	scanf("%lf",&x);
	if (x==0 || x==1)
		f=1;
	else
	{
		f=x;
		for (i=1;i<x;i++)
			f=f*i;
	}
	printf("%lf",f);
	return 0;
}

