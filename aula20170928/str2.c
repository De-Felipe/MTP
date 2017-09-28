#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char frase[256];
	int i, l=0, v=0, c, d=0, b=0;
	printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	for(i=0;frase[i]!='\0';i++)
	{
		if(isalpha(frase[i])!=0)
			l++;
		if(isdigit(frase[i])!=0)
			d++;
		if(isspace(frase[i])!=0)
			b++;
		frase[i]=toupper(frase[i]);
		if(frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U')
			v++;
		c=l-v;
	}
	printf("\nV: %d\nC: %d\nD: %d\nE: %d",v,c,d,b-1);
	return 0;
}
