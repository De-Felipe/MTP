#include<stdio.h>

int main()
{
	int vetor[10], i, j, aux[10];
	for(i=0;i<10;i++)
	{
		printf("Digite o termo %d do vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	for(i=0,j=9;i<j;i++,j--)
	{
		aux[i]=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=aux[i];
	}
	for(i=0;i<10;i++)
		printf("%d ",vetor[i]);
	return 0;
}
