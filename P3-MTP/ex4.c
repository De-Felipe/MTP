#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KANO0 3
#define KANO1 3
#define KANO2 3

#define KCUR0 2 
#define KCUR1 3
#define KCUR2 2

#define KNUM0 3
#define KNUM1 2
#define KNUM2 7

typedef
struct Aluno
{
	char nome[256];
	int matricula;
	unsigned int idade;
}Aluno;

void mostrar(Aluno aluno)
{
	printf("> %s: MAT %03d\n: %u anos;\n", aluno.nome, aluno.matricula, aluno.idade);
}

void gravar(Aluno aluno)
{
	FILE * arq;
	arq = fopen("registro.txt","a");//alterado de "w" para "a"
	fwrite(&(aluno.nome),256,1,arq);
	fwrite(&(aluno.matricula),sizeof(int),1,arq);
	fwrite(&(aluno.idade),sizeof(unsigned int),1,arq);
	fclose(arq);
}

int ler(FILE * arq, Aluno * paluno, unsigned int id)
{
	fseek(arq,id*sizeof(Aluno),SEEK_SET);
	int ok = fread(&(paluno->nome),256,1,arq);
	fread(&(paluno->matricula),sizeof(unsigned int),1,arq);//substituidos matricula por idade e vice-versa
	fread(&(paluno->idade),sizeof(int),1,arq);
	return ok;
}

void inicia()
{
	remove("registro.txt");
	Aluno aluno;
	strncpy(aluno.nome,"Oswald",256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%11 + 17;
	gravar(aluno);
	strncpy(aluno.nome,"Andre",256);
	aluno.matricula = 20;
	aluno.idade = 18;
	gravar(aluno);
	strncpy(aluno.nome,"Yuri", 256);
	aluno.matricula = 1;
	aluno.idade = 20;
	gravar(aluno);//Estava faltando chamar o "gravar"
	strncpy(aluno.nome,"Myllena", 256);
	aluno.matricula = 15;
	aluno.idade = 17;
	gravar(aluno);
	strncpy(aluno.nome,"Silvia", 256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%15 + 17;
	gravar(aluno);
	strncpy(aluno.nome,"Mickey", 256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%9 + 17;
	gravar(aluno);
}

int main()
{
	int ID0 = (KANO0+KANO1+KANO2)%9 + 1, //1
	ID1 = (KCUR0+KCUR1+KCUR2)%9 + 1, //8
	ID2 = (KNUM0+KNUM1+KNUM2)%9 + 1; //4
	srand(ID0*100+ID1*10+ID2);
	Aluno aluno;
	FILE * arq;
	unsigned int i;
	inicia();
	arq = fopen("registro.txt","r");
	i = 0;
	while(!feof(arq))
	{
		if(ler(arq, &aluno, i))
		mostrar(aluno);
		i++;
	}
	fclose(arq);
	return EXIT_SUCCESS;
}
