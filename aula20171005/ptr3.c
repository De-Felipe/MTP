#include<stdio.h>

int main()
{
	int vetor[]={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	int i,cont=0;
	unsigned char *p;
	p=(unsigned char *) vetor;
	for(i=0;i<sizeof(vetor);i++)
	{
		printf("%u ",*(p+i));
		if(p[i]!=0)
			cont++;
	}
	printf("\nHa %i enderecos com bits com pelo menos um numero 1.",cont);
	return 0;
}
