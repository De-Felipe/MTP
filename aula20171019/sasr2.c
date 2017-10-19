#include<stdio.h>

void par()
{
    int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
}

void impar()
{
    int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==1)
			printf("%d ",i);
	}
}

int main()
{
	int x;
	printf("Digite 1 para ver os numeros impares de 1 a 20, ou 2 para ver os pares: ");
	scanf("%d",&x);
	if(x!=1 && x!=2)
		printf("Apenas 1 ou 2!");
	else if(x==2)
		par();
	else
		impar();
	return 0;
}
