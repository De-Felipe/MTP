#include <stdio.h>
#include <stdlib.h>

int primo(unsigned int n)
{
	unsigned int i;
	int x=1;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
		{
			x=0;
			break;
		}
	return x;
}

int somap(unsigned int n)
{
	int i, y=0;
	printf("\n");
	for(i=1;i<=n/2;i++)
		if(primo(i) && primo(n-i))
		{
			printf("%d+%d\n",i,n-i);
			y++;
		}
	return y;
}

int main()
{
    unsigned int n, y;
    printf("Digite um numero: ");
    scanf("%u", &n);
    if(primo(n))
		printf("O numero %d e primo.\n",n);
	else
	{
		y=somap(n);
		if(y>0)
			printf("O numero %d nao e primo, porem possui %d possibilidade(s) de soma entre primos, como visto acima.",n,y);
		else
			printf("O numero %d nao e primo nem expresso pela soma de primos.\n",n);
	}
    return 0;
}
