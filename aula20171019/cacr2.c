#include<stdio.h>
#include<math.h>

int delta(int a,int b,int c)
{
	int d=(pow(b,2))-(4*a*c);
	return d;
}

float raiz(int d,int a,int b,int c)
{
	float r1, r2;
	if(d==0)
	{
		r1=-b/(2*a);
		printf("\nAs raizes sao iguais: r1=%.2f e r2=%.2f.",r1,r1);
	}
	else if(d<0)
		printf("\nr1=NAM, r2=NAM. As raizes nao sao reais.");
	else
	{
		r1=(sqrt(d)-b)/(2*a);
		r2=(-(sqrt(d))-b)/(2*a);
		printf("\nAs raizes sao: r1=%.2f e r2=%.2f.",r1,r2);
	}
	return 0;
}

int main()
{
	int a, b, c, x;
	printf("Insira, respectivamente, os coeficientes 'a', 'b' e 'c': ");
	scanf("%d %d %d", &a, &b, &c);
	x = delta(a,b,c);
	raiz(x,a,b,c);
	return 0;
}
