#include <stdio.h>

int soma(int *num1, int *den1, int *num2, int *den2)
{
	*num1 = (*num1)*(*den2) + (*num2)*(*den1);
	*den1 = (*den1)*(*den2);
	return 0;
}

int main()
{
	int num1,den1,num2,den2;
	do
	{
		printf("Digite, respectivamente, o numerador e o denominador da primeira fracao: ");
		scanf("%d%d", &num1, &den1);
		printf("Digite, respectivamente, o numerador e o denominador da segunda fracao: ");
		scanf("%d%d", &num2, &den2);
		if(den2==0 || den1==0)
			printf("\nErro!\n\n");
	} while(den2==0 || den1==0);
	soma(&num1,&den1,&num2,&den2);
	printf("\nSoma das fracoes: %d/%d",num1,den1);
	return 0;
}
