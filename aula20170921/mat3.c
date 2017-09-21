#include<stdio.h>
#include<math.h>

int main()
{
	int n,b;
	double x;
	printf("Digite um numero para calcular seu logaritmo: ");
	scanf("%d",&n);
	printf("Digite a base do logaritmo: ");
	scanf("%d",&b);
	x=log10(n)/log10(b);
	printf("%lf",x);
	return 0;
}
