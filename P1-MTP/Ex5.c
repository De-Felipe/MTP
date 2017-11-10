#include<stdio.h>
#include<string.h>

int main()
{
	char str[256] = "?!";
	int x = 3+2+2, y = 2+3+3, z = 7+2+3;
	int i, tam;
	strcat(str,"11711EB1020");
	strcat(str,"11711ECP001");
	strcat(str,"11711EBI015");
	tam = strlen(str);
	printf("%s\n",str);
	printf("%d %d %d\n", *(str+x), str[4*y-4], str[2*z]);
	return 0;
}
