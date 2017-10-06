#include<stdio.h>

int main()
{
	unsigned int x=0xFACA8421;
	unsigned char *p;
	int i;
	p=(unsigned char *) &x;
	for(i=0;i<sizeof(p);i++)
		printf("Localizacao: %p\nConteudo: %u\n\n",(p+i),*(p+i));
	return 0;
}
