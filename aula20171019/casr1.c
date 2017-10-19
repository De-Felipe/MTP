#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

void criptografar(char *frase)
{
	int i=0;
	while(frase[i])
	{
		if(isalpha(frase[i]))
		{
			if((frase[i]>='A' && frase[i]<='M') || (frase[i]>='a' && frase[i]<='m'))
				printf("%c", frase[i]+13);
			else
				printf("%c", frase[i]-13);
		}
		else
			printf("%c", frase[i]);
		i++;
	}
}

void descriptografar(char *frase)
{
	criptografar(frase);
}

int main()
{
	char c;
	char frase[N];
	do
	{
		printf("\nDigite 1 para criptografar, 2 para descriptografar ou 3 para sair: ");
		scanf("%c", &c); getchar();
		if(c=='1' || c=='2')
		{
			if(c=='1')
				printf("\nDigite a frase a ser criptografada: ");
			else
				printf("\nDigite a frase a ser descriptografada: ");
			fgets(frase, N, stdin);
			if(c=='1')
				criptografar(frase);
			else
				descriptografar(frase);
		}
	} while(c!='3');
	return 0;
}
