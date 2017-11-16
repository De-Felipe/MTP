#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void preenche(float *elementos)
{
	scanf("%f", elementos);
}

float media(float *vet, int num)
{
	int i;
	float soma=0, media;
	for(i=0; i<num; i++)
		soma+=vet[i];
	media=soma/num;
	printf("\nA media e: %.4f", media);
	return media;
}

void desvio(float *vet, int num, float media)
{
	float dp;
	int i;
	for(i=0; i<num; i++)
		dp+=pow(media-vet[i],2);
	dp/=(num-1);
	dp=sqrt(dp);
	printf("\nO desvio padrao e: %.4f", dp);
}

int main()
{
	float *numeros, md;
	int i, num;
	printf("Digite quantos numeros deseja entrar: ");
	scanf("%d", &num);
	numeros=(float*)calloc(num,sizeof(float*));
	for(i=0; i<num; i++)
	{
		printf("Numero [%d]: ", i);
		preenche(&numeros[i]);
	}
	md=media(numeros, num);
	desvio(numeros, num, md);
	free(numeros);
	return 0;
}
