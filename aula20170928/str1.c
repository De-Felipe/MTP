#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char frase[256];
	char *str1="BOM DIA";
	char *str2="TCHAU";
	int i, cont=0, cmp1, cmp2;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
	{
		frase[i] = toupper(frase[i]);
		cont++;
	}
	printf("\n%d",cont-1);
	cmp1=strncmp(frase, str1, 7);
	cmp2=strncmp(frase, str2, 5);
	if(cmp1==0)
    	printf("\nBom dia pra voce tambem!");
	else if(cmp2==0)
	   	printf("\nSaindo? Que pena...");
	else
	{
		frase[cont-1]='?';
		frase[cont]='\0';
		printf("\nVoce quis dizer: %s",frase);
	}
	return 0;
}
