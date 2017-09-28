#include<stdio.h>

int main()
{
	char frase[256];
	int i, l=0, v=0, c, d=0, b=0;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
	{
		if(isalpha(frase[i])!=0)
		{
			if(frase[i]>='A' && frase[i]<='M' || frase[i]>='a' && frase[i]<='m')
				frase[i]+=13;
			else if(frase[i]>='N' && frase[i]<='Z' || frase[i]>='n' && frase[i]<='z')
				frase[i]-=13;
		}
	}
	printf("%s",frase);
	return 0;
}
