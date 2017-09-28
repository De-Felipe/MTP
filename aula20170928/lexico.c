#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char palavra[5][256], help[256];
	int i, j;
	for (i=0;i<5;i++)
	{
		printf("Digite a palavra %d: ",i+1);
		fgets(palavra[i],256,stdin);
		for(j=0;palavra[i][j]!='\0';j++)
			palavra[i][j]=tolower(palavra[i][j]);
	}
	for(i=0;i<5;i++)
		for(j=1;j<5;j++)
			if(strcmp(palavra[j-1],palavra[j])>0)
			{
				strcpy(help,palavra[j-1]);
				strcpy(palavra[j-1],palavra[j]);
				strcpy(palavra[j],help);
			}
    printf("\nOrdem lexica:\n");
	for(i=0;i<5;i++)
		printf("%s",palavra[i]);
	return 0;
}
