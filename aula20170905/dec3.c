#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	unsigned int x, y, z;
	x=rand()%7;
	y=rand()%7;
	z=rand()%7;
	printf ("numero do primeiro dado: %u\nnumero do segundo dado: %u\nnumero do terceiro dado: %u\nsoma dos dados: %u",x,y,z,x+y+z);
	if ((x+y+z)==7||(x+y+z)==11)
		printf("\nVoce ganhou!");
	else
		printf("\nVoce perdeu!");
	return 0;
}
