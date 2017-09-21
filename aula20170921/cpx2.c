#include<stdio.h>
#include<complex.h>

int main()
{
	float r,i; 
	double complex c, x;
	printf("Digite a parte real e imaginaria de um numero complexo: ");
	scanf("%f%f",&r,&i);
	c=r+i*I;
	x=(conj(c)*c);
	printf("%lf+%lfi",creal(x),cimag(x));
	return 0;
}
