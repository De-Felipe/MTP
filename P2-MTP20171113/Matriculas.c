#include <stdio.h>
int main() {
// trocar pelas matrículas devidas (letras maiúsculas)
	char mat[][16] = {"11711EBI020","11711ECP001","11711EBI015"};
	char curso[4]; curso[3] = '\0';
	int KANO[] = {0,0,0}, KCUR[] = {0,0,0}, KNUM[] = {0,0,0};
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++)
			KANO[i] += mat[i][j] - 48;
		for(j = 5; j < 8; j++)
			curso[j-5] = mat[i][j];
		if(strcmp(curso,"EAU") == 0) KCUR[i] = 1;
		if(strcmp(curso,"EBI") == 0) KCUR[i] = 2;
		if(strcmp(curso,"ECP") == 0) KCUR[i] = 3;
		if(strcmp(curso,"EEL") == 0) KCUR[i] = 4;
		if(strcmp(curso,"ETE") == 0) KCUR[i] = 5;
		if(KCUR[i] == 0) KCUR[i] = 6;
		for(j = 8; j < 11; j++)
			KNUM[i] += mat[i][j] - 48;
		KANO[i] = KANO[i]%9 + 1;
		KNUM[i] = KNUM[i]%9 + 1;
	}
	for(i = 0; i < 3; i++)
	printf("KANO%d = %d; KCUR%d = %d; KNUM%d = %d\n",
	i, KANO[i], i, KCUR[i], i, KNUM[i]);
	return 0;
}

