#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	float f=0;
	double d=0;
	printf("Digite um numero inteiro: ");
	scanf("%d",&n);
	for(i=0;i<729;i++)
	{
		f+=1.f/n;
		d+=1./n;
	}
	printf("Float: %.15f\nDouble: %.15lf",f,d);
	return 0;
}
