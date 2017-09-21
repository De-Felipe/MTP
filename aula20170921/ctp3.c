#include<stdio.h>
#include<ctype.h>

int main()
{
	char frase[256];
	int i, cont=0;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
		if(isalpha(frase[i]))
			cont++;
	printf("%d",cont);
	return 0;
}
