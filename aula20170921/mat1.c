#include<stdio.h>
#include<math.h>

int main()
{
	double x1,y1,x2,y2,d;
	printf("Digite a coordenada X: ");
	scanf("%lf%lf",&x1,&y1);
	printf("Digite a coordenada Y: ");
	scanf("%lf%lf",&x2,&y2);
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%lf",d);
	return 0;
}
