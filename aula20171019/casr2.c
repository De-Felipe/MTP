#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void linhacoluna(int l, int c)
{
	char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
	int i, j, p;
	for(i=l;i>0;i--)
	{
		for(j=c; j>0 ; j--)
		{
			p=rand()%36;
			printf("%c ", caracteres[p]);
		}
		if(j==0)
			printf("\n");
	}
}

int main()
{
	srand(time(0));
	char str[256];
	int i, c, l;
	char caracteres[]=": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
	printf("Digite a quantidade de linhas desejadas: ");
	scanf("%d",&l);
	printf("Digite a quantidade de colunas desejadas: ");
	scanf("%d",&c);
	linhacoluna(l, c);
	return 0;
}
