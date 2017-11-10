#include <stdio.h>

int inverte(char *frase)
{
	if(*frase)
	{
		inverte(frase+1);
		printf("%c",*frase);
	}
	return 0;
}

int main()
{
	char frase[256];
	printf("Digite a frase a ser invertida: ");
	fgets(frase,256,stdin);
	printf("A frase invertida e: ");
	inverte(frase);
	return 0;
}
