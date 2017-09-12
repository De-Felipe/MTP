#include<stdio.h>

int main()
{
	int x,i,flag=0;
	printf("Digite um numero para saber se ele e primo: ");
	scanf("%d",&x);
	if(x<2)
		flag=1;
	else if(x==2)
		flag=0;
	else
		for(i=2;i<=x/2;i++)
			if(x%i==0)
			{
				flag=1;
				break;
			}
	if(flag==0)
		printf("%d e primo.",x);
	else
		printf("%d nao e primo.",x);
	return 0;
}
