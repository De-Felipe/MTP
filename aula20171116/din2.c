#include <stdio.h>
#include <stdlib.h>

void imprime(int **matriz, int l, int c)
{
	int i, j;
	printf("\nMatriz Transposta:\n");
	for(i=0; i<c; i++)
	{
	    for(j=0; j<l; j++)
    		printf("%d%c", matriz[j][i], (j==c-1)? '\n':' ');
		printf("\n");
	}
}

int main()
{
	int **matriz;
	int i, j, l, c;
		printf("Digite, respectivamente, a quantidade de linhas e colunas da matriz: ");
	scanf("%d%d", &l, &c);
	matriz=calloc(l,sizeof(int*));
	for(i=0; i<l; i++)
		matriz[i]=calloc(c,sizeof(int));
	printf("\n");
	for(i=0;i<l;i++)
	{
		printf("Digite os termos da linha %d: ", i+1);
		for(j=0; j<c; j++)
			scanf("%d", &matriz[i][j]);
	}
	imprime(matriz, l, c);
	return 0;
}
