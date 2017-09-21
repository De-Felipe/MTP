#include<stdio.h>
#include<ctype.h>

int main()
{
	char frase[256];
	int i;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
		frase[i] = toupper(frase[i]);
	printf("%s",frase);
	return 0;
}
