#include<stdio.h>

int main()
{
	int b, p, i, r;
	printf("Digite, respectivamente, um numero e uma potencia a eleva-lo: ");
	scanf("%d%d", &b, &p);
	r=1;
	for(i=0;i<p;i++)
		r=r*b;
	printf("%d elevado a %d e %d.", b, p, r);
	return 0;
}
