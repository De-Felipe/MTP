#include<stdio.h>
#include<ctype.h>

int main()
{
	char frase[256];
	int i;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
	{
		frase[i]=toupper(frase[i]);
		switch (frase[i])
		{
			case 'A':
				frase[i]='4';
				break;
			case 'E':
				frase[i]='3';
				break;
			case 'I':
				frase[i]='1';
				break;
			case 'O':
				frase[i]='0';
				break;
			case 'S':
				frase[i]='5';
				break;
			case 'G':
				frase[i]='6';
				break;
			default:
				break;
		}
	}
	printf("%s",frase);
	return 0;
}
