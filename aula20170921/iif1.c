#include<stdio.h>
#include <time.h>

int main()
{
	srand(time(0));
	float p,x;
	int i,cont=0;
	printf("Digite uma probabilidade entre 0 e 1: ");
	scanf("%f",&p);
	for(i=0;i<1000;i++)
	{
		x=(rand()%1001);
		x/=1000;
		if (x<p)
			cont++;
	}
	printf("%d",cont);
	return 0;
}
