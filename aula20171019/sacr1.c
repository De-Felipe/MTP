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
    printf("Digite ENTER para simular um dado ou 'Q' para sair\n");
    do
	{
		scanf("%c", &c);
		if(c=='q')
			break;
		printf("Resultado: %d\n", dado());
    } while(c!='q' && c!='Q');
    printf("Simulacao encerrada.\n");
    return 0;
}
