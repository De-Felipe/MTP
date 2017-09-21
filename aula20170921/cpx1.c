#include<stdio.h>
#include<complex.h>

int main()
{
	float r1,i1,r2,i2,r,i;
	printf("Digite a parte real e imaginaria do primeiro numero complexo: ");
	scanf("%f%f",&r1,&i1);
	printf("Digite a parte real e imaginaria do segundo numero complexo: ");
	scanf("%f%f",&r2,&i2);
	r=r1+r2;
	i=i1+i2;
	printf("%f+%fi",r,i);
	return 0;
}
