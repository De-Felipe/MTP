#include<stdio.h>

int main()
{
	int x,i,r=0;
	printf("Digite um numero para checar se ele e perfeito: ");
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
		if(x%i==0)
			r=r+i;
	if(r==x)
		printf("%d e perfeito",x);
	else
		printf("%d nao e perfeito",x);		
	return 0;
}
