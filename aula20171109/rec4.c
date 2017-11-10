#include <stdio.h>
#include <math.h>

void map(double * vec, double * vec2, int tam, double (*fun)(double , double))
{
    if(tam > 0)
	{
  		*vec = fun(*vec , *vec2);
  		map(vec+1, vec2+1, tam-1, fun);
    }
}

double op1 (double x, double y)
{
    return sqrt(x+y);
}

double op2 (double x, double y)
{
    return x + 3*y;
}

double op3 (double x, double y)
{
    return (pow(y , 2))/x;
}

int main()
{
    double A[]={1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[]={0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
    int n=sizeof(A)/sizeof(double);
    int op=0, i;
    while (op!=4){
    double A[]={1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    printf("\n\nFuncoes do programa\n1: sqrt(A+B)\n2: A+3B\n3: (B^2)/2\n4: Sair\n\nDigite a funcao desejada: ");
    scanf("%d", &op);
    if (op == 1)
        map(A,B,n,op1);
    else if (op == 2)
        map(A,B,n,op2);
    else if (op == 3)
        map(A,B,n,op3);
    else
        return 0;
    for(i = 0; i < n; i++)
   		printf("%lg%s", A[i], (i==n-1)? "\n" : "; ");
    }
    return 0;
}
