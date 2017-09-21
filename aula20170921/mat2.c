#include<stdio.h>
#include<math.h>

int main()
{
	double b,c,a,x;
	printf("Digite o lado B do triangulo: ");
	scanf("%lf",&b);
	printf("Digite o lado C do triangulo: ");
	scanf("%lf",&c);
	printf("Digite o angulo A em radianos: ");
	scanf("%lf",&a);
	x=sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(a));
	printf("%lf",x);
	return 0;
}
