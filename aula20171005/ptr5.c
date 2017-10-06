#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(0));
	int vetor[1000], a, i, cont=0;
	unsigned char *p;
	p=(unsigned char *)vetor;
	for(i=0;i<100;i++)
		vetor[i]=rand()%RAND_MAX;
	printf("Insira um numero de 0 a 255: ");
	scanf("%i", &a);
	for(i=0;i<sizeof(vetor);i++);
		if(vetor[i]==a)
		{
			cont++;
			printf("%p do elemento %i\n ", &vetor[i], vetor[i]);
		}
	printf("\nA quantidade de bytes do numero %i, inserido pelo usuario e %i, e seu inicio esta armazenado em 0x%p, e e imediatamente anterior a 0x%p", a, sizeof(a), p, (p+999));
	return 0;
}
