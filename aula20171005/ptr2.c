#include<stdio.h>

int main()
{
	int vetor[]={0,1,2,4,8,16,1025};
	int i,cont=0;
	unsigned char *p;
	p=(unsigned char *) vetor;
	for(i=0;i<sizeof(vetor);i++)
	{
		printf(" %u",*(p+i));
		if(p[i]==0)
			cont++;
	}
	printf("\nHa %i enderecos com bits somente com 0.",cont);
	return 0;
}
