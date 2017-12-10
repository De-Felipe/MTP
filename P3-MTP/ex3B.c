#include <stdio.h>
#include <stdlib.h>

#define KANO0 3
#define KANO1 3
#define KANO2 3

#define KCUR0 2 
#define KCUR1 3
#define KCUR2 2

#define KNUM0 3
#define KNUM1 2
#define KNUM2 7

double media(double a, double b, double c)
{
	return (a+b+c)/3;
}

int main()
{
	int ID0 = (KANO0+KANO1+KANO2)%9 + 1, //1
	ID1 = (KCUR0+KCUR1+KCUR2)%9 + 1, //8
	ID2 = (KNUM0+KNUM1+KNUM2)%9 + 1; //4
	FILE * arq;
	int idA, idB, idC;
	double nA, nB, nC;
	arq = fopen("dados.dat","rb");
	if(arq == NULL)
	{
		fprintf(stderr,"Arquivo inexistente!\n");
		return EXIT_FAILURE;
	}
	switch(ID2)
	{
		case 1: idA = 13; idB = 14; idC = 64; break;
		case 2: idA = 21; idB = 42; idC = 84; break;
		case 3: idA = 23; idB = 37; idC = 46; break;
		case 4: idA = 16; idB = 55; idC = 82; break;
		case 5: idA = 9; idB = 33; idC = 76; break;
		case 6: idA = 0; idB = 39; idC = 99; break;
		case 7: idA = 10; idB = 86; idC = 92; break;
		case 8: idA = 17; idB = 61; idC = 92; break;
		case 9: idA = 11; idB = 24; idC = 77; break;
		case 10: idA = 5; idB = 53; idC = 65; break;
		default: idA = idB = idC = 0;
	}

	fseek(arq, 21*sizeof(double), SEEK_SET);
	fread(&nA, sizeof(double), 1, arq);
	fseek(arq, 42*sizeof(double), SEEK_SET);
	fread(&nB, sizeof(double), 1, arq);
	fseek(arq, 84*sizeof(double), SEEK_SET);
	fread(&nC, sizeof(double), 1, arq);
	
	fclose(arq);
	printf("Matricula: %d%d%d\n",ID0,ID1,ID2);
	printf("Media [%lf %lf %lf] = %lf\n",nA,nB,nC,media(nA,nB,nC));
	return EXIT_SUCCESS;
}
