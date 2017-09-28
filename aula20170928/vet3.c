#include<stdio.h>

int main()
{
	int vetor[10], i, s=0, p=1;
	for(i=0;i<10;i++)
	{
		printf("Digite o termo %d do vetor: ",i+1);
		scanf("%d",&vetor[i]);
		s+=vetor[i];
		p*=vetor[i];
	}
	printf("\nSoma: %d\nProduto: %d",s,p);
	return 0;
}
