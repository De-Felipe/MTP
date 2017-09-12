#include<stdio.h>

int main()
{
	char palavra[256];
	int i;
	printf("Digite uma palavra para saber quantas letras possui: ");
	scanf("%s", palavra);
	for (i=0; palavra[i]!='\0'; i++);
	printf("A palavra digitada possui %d letras.", i);
	return 0;
}
