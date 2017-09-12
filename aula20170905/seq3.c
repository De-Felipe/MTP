#include <stdio.h>

int main()
{
	double a, b, c, d, e;
	do{
		printf("Digite a nota A do aluno de 0.0 a 10.0: ");
		scanf("%lf",&a);
	}while(a<0.0 || a>10.0);
	do{
		printf("Digite a nota B do aluno de 0.0 a 10.0: ");
		scanf("%lf",&b);
		}while(b<0.0 || b>10.0);
	do{
		printf("Digite a nota C do aluno de 0.0 a 10.0: ");
		scanf("%lf",&c);
		}while(c<0.0 || c>10.0);
	do{
		printf("Digite a nota D do aluno de 0.0 a 10.0: ");
		scanf("%lf",&d);
		}while(d<0.0 || d>10.0);
	do{
		printf("Digite a nota E do aluno de 0.0 a 10.0: ");
		scanf("%lf",&e);
		}while(e<0.0 || e>10.0);
		printf("A media do aluno e %lf", (2*(a+b+c)+3*d+5*e)/14);
	return 0;
}
