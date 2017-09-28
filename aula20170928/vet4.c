#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	unsigned int x;
	int vetor[1000], i, min, max;
	float r;
	printf("Digite um numero inteiro nao negativo entre 0 e 1000: ");
	scanf("%u",&x);
	for(i=0;i<x;i++)
	{
		vetor[i]=rand()%10;
		if(i==0)
		{
			min=vetor[i];
			max=vetor[i];
		}
		if(vetor[i]<min)
			min=vetor[i];
		if(vetor[i]>max)
			max=vetor[i];
	}
	printf("\nMin: %d\nMax: %d",min,max);
	return 0;
}
