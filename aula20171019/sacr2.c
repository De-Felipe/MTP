#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado()
{
	return rand()%6+1;
}

int main()
{
    srand(time(0));
    char c;
    int help,j=0;
    printf("Digite ENTER para lancar o dado\n\n");
    do
    {
    	int i=0,soma=0;
    	do
		{
			scanf("%c", &c);
			help=dado();
			printf("Dado %i: %d",i+1,help);
			soma+=help;
			i++;
	    } while(i<5);
	    if(soma>=18 && soma<=23)
	    {
			printf("\nSoma: %d.\nVoce ganhou!!!\n\n",soma);
			j=4;
		}
		else
		{
			printf("\nSoma: %d.\nNao foi dessa vez, melhor sorte na proxima.\n\n",soma);
			j++;
		}
	} while (j<3);
    if(j==3)
		printf("\nTodas suas tentativas foram esgotadas, favor inserir 1 Real para tentar novamente.");
    return 0;
}
